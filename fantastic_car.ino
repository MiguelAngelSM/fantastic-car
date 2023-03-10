/**
  This code light and turn off the leds from left to right of a LED board and reverse 
*/
//Variable definition

//Time to change between leds
#define TIMER 75

//Pins connected to the leds (this is the order from left to right) you can decide how many and what are used
byte ledPins[]={
  16, 14, 12, 13, 15, 2, 0, 4, 5
};

//Led ammount
int ledCounts;

//This is for initializing outputs and inputs
void setup() {
  //Led amount
  ledCounts = sizeof(ledPins);
  //Initialization of outputs
  for(int i=0; i < ledCounts; i++){
    pinMode(ledPins[i],OUTPUT);
  }
}

//This is the main loop of the program
void loop() {
  //This is the first direction in wich leds are on
  for (int i = 0; i < ledCounts; i++) {
    change(ledPins[i]);
  } 
  //This is the second direction in wich leds are on
  for (int i = ledCounts - 1; i > -1; i--) {
    change(ledPins[i]);
  }
}

//This is a function that light a led, wait the timer and put it off at the end
void change(byte led){
  digitalWrite(led,HIGH);
  delay(TIMER);
  digitalWrite(led,LOW);
}
