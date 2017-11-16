/*
Fight - https://github.com/n0ciple/fight
July 25th, 2017
Robin Dupont (N0ciple)
*/

#ifndef ENEMY_H
#define ENEMY_H
#include "global.h"

byte frameCounterWalking = 0;


struct Enemy {
  byte spriteSize;
  byte state;       // state of the enemy = 0: idle, 1: kicking, 2: jumping, 3: walking, 4: punching 
  float x;
  byte y;
  float dx;
  float ddx;
  bool frontOffP;   // Bolean : true if the enemy is displayed in front of the player
  byte frcount;     // frame counter
  byte hp;
  bool hit;
  byte hitcount;
  bool visible;
  byte dyingcount;
};


struct Enemy enemyArray[10];

struct Enemy createEnemy(int xLoc, int yLoc){
  struct Enemy locEnemy;
  
  locEnemy.state=STATIC;
  locEnemy.spriteSize=20;
  locEnemy.x= xLoc;
  locEnemy.y= yLoc-player.spriteSize;
  locEnemy.dx=0;
  locEnemy.ddx=1;
  locEnemy.frcount = 2;
  locEnemy.hp = 3;
  locEnemy.hit=false;
  locEnemy.hitcount=0;
  locEnemy.visible=false;
  locEnemy.dyingcount =0;

  return locEnemy;
}



// draw enemies

void drawEnemy(Enemy *myEnemy){
  if(!myEnemy->visible) return;
  switch(myEnemy->state){
    case STATIC :
      if(!myEnemy->hit){
        if(arduboy.everyXFrames(7)) myEnemy->frcount++;
        if(myEnemy->frcount >3)   myEnemy->frcount = 0;
        sprite.drawPlusMask(myEnemy->x-camera.offx,myEnemy->y-camera.offy,ENEMY1_WALK,myEnemy->frcount);
      } else {
          myEnemy->hitcount++;
          if(myEnemy->hitcount>18){
            myEnemy->hitcount=0;
            myEnemy->hit=false; 
          }
        if(arduboy.everyXFrames(2)){
         if(arduboy.everyXFrames(4)) myEnemy->frcount++;
        if(myEnemy->frcount >3)   myEnemy->frcount = 0;
        sprite.drawPlusMask(myEnemy->x-camera.offx,myEnemy->y-camera.offy,ENEMY1_WALK,myEnemy->frcount);
        }
      }
      break;
      
    case DYING:
      myEnemy->state = DEAD;
      break;
      
    
  }
}


void updateEnemy(Enemy *myEnemy){
  // replace enemy
  if(myEnemy->visible && myEnemy->state == DEAD){
    *myEnemy = createEnemy(myEnemy->x+100+random(20),61);
  }

  if(myEnemy->x-camera.offx <= 127){
    myEnemy->visible = true;
  }

  if(myEnemy->visible){
    myEnemy->dx -= myEnemy->ddx;
    myEnemy->dx = max(myEnemy->dx,-1);
    myEnemy->x += myEnemy->dx;
  }
  
}

void damageEnemy(Enemy *myEnemy, int damages){
  if(!myEnemy->hit){
    myEnemy->hit = true;
    if(myEnemy->hp<damages){
      myEnemy->hp=0;
    }else{
      myEnemy->hp-=damages;
    }
    if(myEnemy->hp==0) myEnemy->state = DYING;

    myEnemy->dx += 7;
  }
}

#endif
