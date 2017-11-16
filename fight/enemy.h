#ifndef ENEMY_H
#define ENEMY_H
#include "global.h"

byte frameCounterWalking = 0;


struct Enemy {
  byte spriteSize;
  byte state;       // state of the enemy = 0: idle, 1: kicking, 2: jumping, 3: walking, 4: punching 
  byte x;
  int y;
  int dy;
  bool frontOffP;   // Bolean : true if the enemy is displayed in front of the player
  byte frcount;     // frame counter
  byte hp;
};


struct Enemy enemyArray[10];

struct Enemy createEnemy(int xLoc, int yLoc){
  struct Enemy locEnemy;
  
  locEnemy.state=STATIC;
  locEnemy.spriteSize=32;
  locEnemy.x= xLoc;
  locEnemy.y= yLoc-player.spriteSize;
  locEnemy.dy=0;
  locEnemy.frcount = 2;
  loc.Enemy.hp = 3;

  return locEnemy;
}



// draw enemies

void drawEnemy(Enemy *myEnemy){
  switch(myEnemy->state){
    case STATIC :
      if(arduboy.everyXFrames(7)) myEnemy->frcount++;
      if(myEnemy->frcount >3)   myEnemy->frcount = 0;
      sprite.drawPlusMask(myEnemy->x-camera.offx,myEnemy->y-camera.offy,ENEMY1_WALK,myEnemy->frcount);
      break;
  }
}



#endif
