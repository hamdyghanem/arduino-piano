
#include "pitches.h"
 
// notes in the melody:
int melody[] = {
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};
int duration = 300;  // 500 miliseconds
 int buzzer = 12;

 int buttonDopin = 7;
 int buttonRepin = 6;
 int buttonMipin = 5;
 int buttonFapin = 8;
 int buttonSolpin = 9;
 int buttonLapin = 10;


void setup() {

  pinMode(buttonDopin, INPUT_PULLUP);
  pinMode(buttonRepin, INPUT_PULLUP);
  pinMode(buttonMipin, INPUT_PULLUP);
  pinMode(buttonFapin, INPUT_PULLUP);
  pinMode(buttonSolpin, INPUT_PULLUP);
  pinMode(buttonLapin, INPUT_PULLUP);

}
 
void loop() {  
   
  if (digitalRead(buttonDopin) == LOW)
  {
    tone(buzzer, NOTE_C5, duration);
  }
  if (digitalRead(buttonRepin) == LOW)
  {
    tone(buzzer, NOTE_D5, duration);
  }

  if (digitalRead(buttonMipin) == LOW)
  {
    tone(buzzer, NOTE_E5, duration);
  }
   if (digitalRead(buttonFapin) == LOW)
  {
    tone(buzzer, NOTE_F5, duration);
  }
   
  if (digitalRead(buttonSolpin) == LOW)
  {
    tone(buzzer, NOTE_G5, duration);
  }
   if (digitalRead(buttonLapin) == LOW)
  {
    tone(buzzer, NOTE_A5, duration);
  }
  //for (int thisNote = 0; thisNote < 8; thisNote++) {
    // pin8 output the voice, every scale is 0.5 sencond  
   // tone(8, melody[thisNote], duration);
     
    // Output the voice after several minutes
   // delay(1000);
 // }
   
  // restart after two seconds 
 // delay(2000);
}
