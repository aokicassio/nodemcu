
int buzzPin=13; 
int frequency=500; //Specified in Hz

int timeOn=1500; //milliseconds
int timeOff=1500; // millisecods

void setup() {
}

void loop(){
  tone(buzzPin, frequency);
  delay(timeOn);
  noTone(buzzPin);
  delay(timeOff);
}
