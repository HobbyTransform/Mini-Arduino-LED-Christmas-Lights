/*
 6 LED Christmas Lights
 
 This example shows how to fade six LED's on the pwm pins
 using the analogWrite() function.
 
 This concept code is based on the single led 'fade' example sketch.
 */

int ledPin1 = 3;          // first LED on pin 3
int ledPin2 = 5;          // second LED on pin 5
int ledPin3 = 6;          // third LED on pin 6
int ledPin4 = 9;          // fourth LED on pin 9
int ledPin5 = 10;         // fifth LED on pin 10
int ledPin6 = 11;         // sixth LED on pin 11
int brightness1 = 0;      // minimum brightness
int brightness2 = 255;    // maximum brightness
int fadeAmount = 51;      // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup()  { 
  // declare led pins to be outputs:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
} 

// the loop routine runs over and over again forever:
void loop()  { 
  // set the brightness of LED's:
  analogWrite(ledPin1, brightness1);
  analogWrite(ledPin2, brightness2);
  analogWrite(ledPin3, brightness1);
  analogWrite(ledPin4, brightness2);
  analogWrite(ledPin5, brightness1);
  analogWrite(ledPin6, brightness2);

  // change the brightness for next time through the loop:
  brightness1 = brightness1 + fadeAmount;
  brightness2 = brightness2 - fadeAmount;

  // reverse the direction of the fading at the ends of the fade: 
  if (brightness1 == 0 || brightness1 == 255) {
    fadeAmount = -fadeAmount ; 
  }     
  // wait for 30 milliseconds to see the dimming effect    
  delay(30);                            
}

