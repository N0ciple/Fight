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
  int x;
  byte y;
  byte dy;
  bool frontOffP;   // Bolean : true if the enemy is displayed in front of the player
  byte frcount;     // frame counter
  byte hp;
  bool hit;
  byte hitcount;
  bool visible;
};


struct Enemy enemyArray[10];

struct Enemy createEnemy(int xLoc, int yLoc){
  struct Enemy locEnemy;
  
  locEnemy.state=STATIC;
  locEnemy.spriteSize=20;
  locEnemy.x= xLoc;
  locEnemy.y= yLoc-player.spriteSize;
  locEnemy.dy=0;
  locEnemy.frcount = 2;
  locEnemy.hp = 3;
  locEnemy.hit=false;
  locEnemy.hitcount=0;
  locEnemy.visible=true;

  return locEnemy;
}



// draw enemies

void drawEnemy(Enemy *myEnemy){
  if(myEnemy->hp <= 0) return;
  switch(myEnemy->state){
    case STATIC :
      if(arduboy.everyXFrames(7)) myEnemy->frcount++;
      if(myEnemy->frcount >3)   myEnemy->frcount = 0;
      sprite.drawPlusMask(myEnemy->x-camera.offx,myEnemy->y-camera.offy,ENEMY1_WALK,myEnemy->frcount);
      break;
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
  }else{
    myEnemy->hitcount++;
    if(myEnemy->hitcount>18){
      myEnemy->hitcount=0;
      myEnemy->hit=false; 
    }
  }
}

#endif
