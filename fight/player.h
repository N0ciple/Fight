/*
Fight - https://github.com/n0ciple/fight
July 25th, 2017
Robin Dupont (N0ciple)
*/

#ifndef PLAYER_H
#define PLAYER_H

#include "global.h"
#include "camera.h"

#define STATIC 0
#define KICKING 1
#define JUMPING 2
#define WALKING 3
#define PUNCHING 4
#define DYING 5 

#define PUNCH_DAMAGE 1
#define KICK_DAMAGE 2

byte frameCounter = 0;
byte frameCounter2 =0;
byte frameCounter3 = 0;
int gravity = -1;


// struct representing the player

struct Player {
  byte spriteSize;
  byte state; // state of the player = 0: idle, 1: kicking, 2: jumping, 3: walking, 4: punching 
  byte x;
  int y;
  int dy;
  byte hp;
  bool vulnerable;
  byte vulncount;
};

struct Player player;

void initPlayer(){
  player.state=0;
  player.spriteSize=32;
  player.x= 20;
  player.y= 63-player.spriteSize;
  player.dy=0;
  player.hp=10;
  player.vulnerable=true;
  player.vulncount=0;
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


void updatePlayer(){
  if(!player.vulnerable){
    if(arduboy.everyXFrames(2)){
      player.vulncount++;
    }
    if(player.vulncount>30){
      player.vulnerable = true;
      player.vulncount=0;
    }
  }
}


void drawPlayer(){

  // make sure the player is not exceeding the limits of the screen
  player.x = max(2,player.x);
  player.x = min(player.x,127-player.spriteSize);

    // Manage camera on X-axis
  if(player.x > WIDTH/2 + camera.pLimx){
    player.x = WIDTH/2 + camera.pLimx;
    camera.offx += 2;
  } else if(player.x < WIDTH/2 - camera.pLimx){
        player.x = WIDTH/2 - camera.pLimx;
            camera.offx -= 2;
  }

  // Manage camera on Y-axis
  arduboy.setCursor(30,0);
  if(player.y >61-player.spriteSize){
    player.y = 61-player.spriteSize;
    camera.offy += player.dy;
  } else if(player.y < HEIGHT/2 - camera.pLimy){
    player.y = HEIGHT/2 - camera.pLimy;
    camera.offy += player.dy;
  }  
  
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
      
      //player.y = min(max(0,player.y),63-player.spriteSize);
      
      if(camera.offy >= 0 and player.dy >0){
        player.y=61-player.spriteSize;
        player.state=STATIC;
        player.dy=0;
        camera.offy = 0;
      }
      
      /*if(player.y>=63-player.spriteSize){
        player.state=STATIC;
        player.dy=0;
      }*/
      break;
      
    case STATIC :
      sprite.drawPlusMask(player.x,player.y,WALK,0);
      break;
  }

}



#endif


