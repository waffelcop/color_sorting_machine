const byte motorpins[4] = {4, 6, 3, 5}; //Pins where the motor is connected to the Arduino 3,1,4,2
const int motor[4] = {0b00000101, 0b00001001, 0b00001010, 0b00000110}; 

void setup() {
  for(int i= 3; i<10; i++)
    pinMode(i, OUTPUT);
}

void loop() {  
  //motor will spin all the time
  for(int x = 0; x < 4; x++){
    digitalWrite(motorpins[0], motor[x] & 0b00000001);
    digitalWrite(motorpins[1], motor[x] & 0b00000010);
    digitalWrite(motorpins[2], motor[x] & 0b00000100);
    digitalWrite(motorpins[3], motor[x] & 0b00001000);
    delay(2);
  }
}
