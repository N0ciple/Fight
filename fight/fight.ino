/*
Fight - https://github.com/n0ciple/fight
July 25th, 2017
Robin Dupont (N0ciple)
*/


#include "global.h"
#include "player.h"

 


void setup() {
  
  //arduboy.begin();
  
  arduboy.boot();
  arduboy.blank();
  arduboy.flashlight();
  arduboy.audio.begin();

  initPlayer();
  
  arduboy.setFrameRate(60);
  arduboy.clear();
  

}

void loop() {

  if (!arduboy.nextFrame()) return;
  arduboy.clear();
  arduboy.pollButtons();

  
  for(int i = 0;i<2;i++){
    for(int j = 0; j<16;j++){
      sprite.drawSelfMasked(j*8,HEIGHT-i*8,BRICK,0);
    }
  }

  
  handleInputs();
  drawPlayer();
  
  arduboy.display();



}
