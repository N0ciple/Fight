/*
Fight - https://github.com/n0ciple/fight
July 25th, 2017
Robin Dupont (N0ciple)
*/


#include "global.h"
#include "player.h"
#include "camera.h"
#include "enemy.h"
#include "utils.h"

void setup() {
  
  //arduboy.begin();

  Serial.begin(9600);
  
  arduboy.boot();
  arduboy.blank();
  arduboy.flashlight();
  arduboy.audio.begin();

  initPlayer();
  arduboy.setFrameRate(60);
  arduboy.clear();

  arduboy.initRandomSeed();
  
  // populate the enemy array
  for(int j=0; j<9; j++) {
    enemyArray[j] = createEnemy(50*(j+1),61);
  }
  

}

void loop() {

  if (!arduboy.nextFrame()) return;
  arduboy.clear();
  arduboy.pollButtons();
  //arduboy.print(arduboy.cpuLoad());
  //arduboy.setCursor(0,10);
  //arduboy.print(String(camera.offx) +" "+String(camera.offy));
  drawBackground();
  handleInputs();
  updatePlayer();
  for( int i=0; i<9;i++){
    updateEnemy(&enemyArray[i]);
    drawEnemy(&enemyArray[i]);
    manageCollision(&player,&enemyArray[i]);
    arduboy.print(enemyArray[i].visible);
    //arduboy.print(enemyArray[i].state);
  }





  drawPlayer();
  arduboy.display();



}
