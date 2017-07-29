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
bool walking = false;
bool punching = false;
byte frameCounter = 0;
byte frameCounter2 =0;
byte frameCounter3 = 0;
int posx = 20;
int posy = 63-fightsize;
int dy = 0;
int gravity = -1;


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

  //idle by default : reset walking boolean
  walking = false;
  
  // Manage input
  if(arduboy.justPressed(A_BUTTON) and !kicking and !punching){
    kicking = true;
  }
  if(arduboy.pressed(LEFT_BUTTON) and !kicking and !punching){
    posx-=2;
    if(!jumping) walking = true;
  }
   if(arduboy.pressed(RIGHT_BUTTON) and !kicking and !punching){
    posx+=2;
    if(!jumping) walking = true;
  }
  if(arduboy.justPressed(UP_BUTTON) and !jumping and !kicking and !punching){
    jumping=true;
    walking = false;
    dy = -5;
  }
  
  if(arduboy.justPressed(B_BUTTON) and !kicking and !punching){
    punching = true;
  }


  posx = max(1,posx);
  posx = min(posx,127-fightsize);

 
  
  if(kicking and !jumping){
    sprite.drawSelfMasked(posx,posy,FIGHTER,frameCounter);
    if(arduboy.everyXFrames(4)) frameCounter++;
    if(frameCounter>4){
      frameCounter=0;
      kicking = false;
    } 
  } else if(walking){
    sprite.drawSelfMasked(posx,posy,WALK,frameCounter2);
    if(arduboy.everyXFrames(4)){
      frameCounter2++;
      frameCounter2 %=4;
    }
  } else if(punching and !jumping){
     sprite.drawSelfMasked(posx,posy,PUNCH,frameCounter3);
    if(arduboy.everyXFrames(3)) frameCounter3++;
    if(frameCounter3>3){
      frameCounter3=0;
      punching=false;
    }
  } else  if(jumping){
    posy += dy;
    if(arduboy.everyXFrames(4)){
      dy -= gravity;
    }
    if(dy<=0){ sprite.drawSelfMasked(posx,posy,JUMP,0); }
    if(dy>0){ sprite.drawSelfMasked(posx,posy,JUMP,1); }
    
    posy = min(max(0,posy),63-fightsize);
    
    if(posy>=63-fightsize){
      jumping = false;
      dy=0;
    }
  } else {
  
    sprite.drawSelfMasked(posx,posy,WALK,0);
  }

  arduboy.print("x="+String(posx));
  arduboy.print("\ny="+String(posy));
  arduboy.print("\ndy="+String(dy));

  arduboy.display();



}
