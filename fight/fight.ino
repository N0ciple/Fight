/*
Fight - https://github.com/n0ciple/fight
July 25th, 2017
Robin Dupont (N0ciple)
*/


#include "global.h"
#include "player.h"
#include "camera.h"
#include "enemy.h"


void setup() {
  
  //arduboy.begin();
  
  arduboy.boot();
  arduboy.blank();
  arduboy.flashlight();
  arduboy.audio.begin();

  initPlayer();
  initEnemy();
  arduboy.setFrameRate(60);
  arduboy.clear();

  
  // populate the enemy array
  for(int j=0; j<9; j++) {
    enemyArray[j] = createEnemy(j*12,63);
  }
  

}

void loop() {

  if (!arduboy.nextFrame()) return;
  arduboy.clear();
  arduboy.pollButtons();
  arduboy.print(arduboy.cpuLoad());
  //arduboy.setCursor(0,10);
  //arduboy.print(String(camera.offx) +" "+String(camera.offy));
  drawBackground();
  handleInputs();
  for( int i=0; i<9;i++){
    drawEnemy(enemyArray[i]);
  }
  drawEnemy(enemy);
  drawPlayer();
  arduboy.display();



}
