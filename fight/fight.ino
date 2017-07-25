/*
Fight
July 25th, 2017
Robin Dupont (N0ciple)
*/

#include <Arduboy2.h>
#include "bitmaps.h"
Arduboy2 arduboy;

int fightsize = 32;
bool kicking = false;

void setup() {
  // put your setup code here, to run once:
  arduboy.begin();
  arduboy.clear();

}

void loop() {
  // put your main code here, to run repeatedly:
  if (!arduboy.nextFrame()) {
    return;
  }
  
  arduboy.pollButtons();
  if(arduboy.justPressed(A_BUTTON) ){
    kicking = true;
  }

  if(kicking){
    
    arduboy.clear();
    arduboy.drawBitmap(63-fightsize,63-fightsize,FIGHT1,32,32,WHITE);
    arduboy.display();  
    delay(100); 
    
    arduboy.clear();
    arduboy.drawBitmap(63-fightsize,63-fightsize,FIGHT2,32,32,WHITE);
    arduboy.display();    
    delay(75);

    arduboy.clear();
    arduboy.drawBitmap(63-fightsize,63-fightsize,FIGHT3,32,32,WHITE);
    arduboy.display();    
    delay(75);

    arduboy.clear();
    arduboy.drawBitmap(63-fightsize,63-fightsize,FIGHT2,32,32,WHITE);
    arduboy.display();  
    delay(100);

    arduboy.clear();
    arduboy.drawBitmap(63-fightsize,63-fightsize,FIGHT1,32,32,WHITE);
    arduboy.display();  

    kicking = false;
  }

    
    arduboy.display();



}
