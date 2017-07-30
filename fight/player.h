#ifndef PLAYER_H
#define PLAYER_H

#include "global.h"

#define STATIC 0
#define KICKING 1
#define JUMPING 2
#define WALKING 3
#define PUNCHING 4


byte frameCounter = 0;
byte frameCounter2 =0;
byte frameCounter3 = 0;
int gravity = -1;


// struct representing the player

struct Player {
  byte spriteSize;
  byte state; // state of the player = 0: idle, 1: kicking, 2: jumping, 3: walking, 4: punching 
  byte x;
  int8_t y;
  int dy;
};

struct Player player;

void initPlayer(){
  player.state=0;
  player.spriteSize=32;
  player.x= 20;
  player.y= 63-player.spriteSize;
  player.dy=0;
}


void handleInputs() {
 //idle by default 
  
  // Manage input
  if(arduboy.justPressed(A_BUTTON) and player.state!= KICKING and player.state!=PUNCHING and player.state!=JUMPING){
    player.state = KICKING;
  }
  if(arduboy.pressed(LEFT_BUTTON) and player.state!=KICKING and player.state!=PUNCHING){
    player.x-=2;
    if(player.state!=JUMPING) player.state=WALKING;
  }
   if(arduboy.pressed(RIGHT_BUTTON) and player.state!=KICKING and player.state!=PUNCHING){
    player.x+=2;
    if(player.state!=JUMPING) player.state=WALKING;
  }
  if(arduboy.justPressed(UP_BUTTON) and player.state!=JUMPING and player.state!=KICKING and player.state!=PUNCHING){
    player.state=JUMPING;
    player.dy = -5;
}
  
  if(arduboy.justPressed(B_BUTTON) and player.state!=KICKING and player.state!=PUNCHING and player.state!=JUMPING){
    player.state=PUNCHING;

  }


  // set static if the player is not moving
  if(arduboy.buttonsState()==0 && player.state==WALKING){
    player.state=STATIC;
  }

}


void drawPlayer(){

  // make sure the player is not exceeding the limits of the screen
  player.x = max(2,player.x);
  player.x = min(player.x,127-player.spriteSize);
  
  switch(player.state){
    case KICKING :
   
      sprite.drawPlusMask(player.x,player.y,KICK,frameCounter);
      if(arduboy.everyXFrames(4)) frameCounter++;
      if(frameCounter>4){
        frameCounter=0;
        player.state=STATIC;
      }
      break;
      
    case WALKING :
      sprite.drawPlusMask(player.x,player.y,WALK,frameCounter2);
      if(arduboy.everyXFrames(4)){
        frameCounter2++;
        frameCounter2 %=4;
      }
      break;
      
    case PUNCHING :
       sprite.drawPlusMask(player.x,player.y,PUNCH,frameCounter3);
      if(arduboy.everyXFrames(3)) frameCounter3++;
      if(frameCounter3>3){
        frameCounter3=0;
        player.state=STATIC;
      }
      break;
      
    case JUMPING :
      player.y += player.dy;
      if(arduboy.everyXFrames(4)){
        player.dy -= gravity;
      }
      if(player.dy<=0){ sprite.drawPlusMask(player.x,player.y,JUMP,0); 
      } else { 
        sprite.drawPlusMask(player.x,player.y,JUMP,1); 
      }
      
      player.y = min(max(0,player.y),63-player.spriteSize);
      
      if(player.y>=63-player.spriteSize){
        player.state=STATIC;
        player.dy=0;
      }
      break;
      
    case STATIC :
      sprite.drawPlusMask(player.x,player.y,WALK,0);
      break;
  }

}



#endif


