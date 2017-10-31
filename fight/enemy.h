#ifndef ENEMY_H
#define ENEMY_H
#include "global.h"

struct Enemy {
  byte spriteSize;
  byte state; // state of the player = 0: idle, 1: kicking, 2: jumping, 3: walking, 4: punching 
  byte x;
  int y;
  int dy;
  bool frontOffP; // Bolean : true if the enemy is displayed in front of the player
};



struct Enemy enemy;

struct Enemy enemyArray[10];


void initEnemy(){
  enemy.state=0;
  enemy.spriteSize=32;
  enemy.x= 90;
  enemy.y= 63-player.spriteSize;
  enemy.dy=0;
}


struct Enemy createEnemy(int xLoc, int yLoc){
  struct Enemy locEnemy;
  
  locEnemy.state=0;
  locEnemy.spriteSize=32;
  locEnemy.x= xLoc;
  locEnemy.y= yLoc-player.spriteSize;
  locEnemy.dy=0;

  return locEnemy;
}



// draw enemies

void drawEnemy(Enemy myEnemy){
  switch(player.state){
    case KICKING :
      sprite.drawPlusMask(player.x,player.y,WALK,frameCounter2);
      if(arduboy.everyXFrames(4)){
        frameCounter2++;
        frameCounter2 %=4;
      }
      break;
      sprite.drawPlusMask(myEnemy.x-camera.offx,myEnemy.y-camera.offy,WALK,0);
}



#endif
