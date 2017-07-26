/*
Fight
July 25th, 2017
Robin Dupont (N0ciple)
*/

#include <Arduboy2.h>
#include "bitmaps.h"

Arduboy2 arduboy;
Sprites sprite;
int fightsize = 32;
bool kicking = false;
bool jumping = false;
byte frameCounter = 0;
int posx = 20;
int posy = 63-fightsize;
int dy = 0;
int gravity = -2;


void setup() {
  // put your setup code here, to run once:
  arduboy.begin();
  arduboy.setFrameRate(60);
  arduboy.clear();

}

void loop() {
  // put your main code here, to run repeatedly:
  if (!arduboy.nextFrame()) {
    return;
  }

  arduboy.clear();
  arduboy.pollButtons();
  
  // Manage input
  if(arduboy.justPressed(A_BUTTON) and !kicking){
    kicking = true;
  }
  if(arduboy.pressed(LEFT_BUTTON) and !kicking){
    posx-=2;
  }
   if(arduboy.pressed(RIGHT_BUTTON) and !kicking){
    posx+=2;
  }
  if(arduboy.justPressed(UP_BUTTON) and !jumping){
    jumping=true;
    dy = -10;
  }

  posx = max(1,posx);
  posx = min(posx,127-fightsize);

  if(jumping){
    posy += dy;
    if(arduboy.everyXFrames(2)){
      dy -= gravity;
    }
    posy = min(max(0,posy),63-fightsize);
    
    if(posy>=63-fightsize){
      jumping = false;
      dy=0;
    }
  }
  
  if(kicking){
    sprite.drawSelfMasked(posx,posy,FIGHTER,frameCounter);
    if(arduboy.everyXFrames(4)) frameCounter++;
    if(frameCounter>4){
      frameCounter=0;
      kicking = false;
    } 
  } else{
    sprite.drawSelfMasked(posx,posy,FIGHTER,0);
  }

  arduboy.print("x="+String(posx));
  arduboy.print("\ny="+String(posy));
  arduboy.print("\ndy="+String(dy));

  arduboy.display();



}
