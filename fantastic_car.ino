//Time to change between leds
#define TIMER 75
//Pins connected to the leds
byte ledPins[]={
  16, 14, 12, 13, 15, 2, 0, 4, 5
};
//Led ammount
int ledCounts;

//This is for initializing outputs and inputs
void setup() {
  ledCounts = sizeof(ledPins);
  for(int i=0; i < ledCounts; i++){
    pinMode(ledPins[i],OUTPUT);
  }
}

//This is the main loop of the program
void loop() {
  //This is the first direction
  for (int i = 0; i < ledCounts; i++) {
    change(ledPins[i]);
  } 
  //This is the second direction
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
