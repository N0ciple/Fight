/*
Fight - https://github.com/n0ciple/fight
July 25th, 2017
Robin Dupont (N0ciple)
*/

#ifndef UTILS_H
#define UTILS_H

#include "global.h"


int colision_offsets[][2] = {
  // STATIC, WALKING
  {6, -14},
  // PUNCHING
  {10, 0},
  // KICKING
  {14, 2},
  // JUMPING
  {3, -9}
};

float distance(int x1, int y1, int x2, int y2){
  float dist = sqrt(pow((x1-x2),2) + pow((y1-y2),2));
  return dist;
}

bool isColliding(Player *myPlayer, Enemy *myEnemy, int *parameters){
  /*Serial.print("\nPlpayer x:\t");
  Serial.print(myPlayer->x+16);
  Serial.print("\tPlayer y:\t");
  Serial.print(myPlayer->y+16);
  Serial.print("\nEnemy x:\t");
  Serial.print(myEnemy->x+10-camera.offx);
  Serial.print("\tEnemy y:\t");*/
  if(myPlayer->x+16+parameters[0] >= myEnemy->x+10-camera.offx && myPlayer->x+16+parameters[1] <= myEnemy->x+10-camera.offx){
    if(myPlayer->y+16+10 >= myEnemy->y+16-camera.offy){
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}

void manageCollision(Player *myPlayer, Enemy *myEnemy){
  switch(myPlayer->state){
    case STATIC:
    case WALKING:
      if(isColliding(myPlayer, myEnemy, colision_offsets[0]) && myPlayer->vulnerable){
        if(myEnemy->hp>0){
          myPlayer->vulnerable = false;
          myPlayer->hp--;
        }
      }
      break;
    case PUNCHING:
      if(isColliding(myPlayer, myEnemy, colision_offsets[1])){
        damageEnemy(myEnemy,PUNCH_DAMAGE);
        Serial.println("enemy hit");
        Serial.println(myEnemy->hp);
      }
      break;
    case KICKING:
    if(isColliding(myPlayer, myEnemy, colision_offsets[2])){
      damageEnemy(myEnemy,KICK_DAMAGE);
      Serial.println("enemy hit");
      Serial.println(myEnemy->hp);
    }
      break;
    case JUMPING:
      if(isColliding(myPlayer, myEnemy, colision_offsets[3]) && myPlayer->vulnerable){
         if(myEnemy->hp>0){
          myPlayer->vulnerable = false;
          myPlayer->hp--;
         }
      }
      break;
    
  }
  
}
  














#endif
