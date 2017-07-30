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

void initEnemy(){
  enemy.state=0;
  enemy.spriteSize=32;
  enemy.x= 90;
  enemy.y= 63-player.spriteSize;
  enemy.dy=0;
  
}

void drawEnemy(){
  sprite.drawPlusMask(enemy.x-camera.offx,enemy.y-camera.offy,WALK,0);
}



#endif
