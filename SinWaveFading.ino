/*
 SinWave fading for RGB LED
 Why use complicated loops when the Sin fuction can do nicely 
 chris.gozzard81@gmail.com
*/

int ledPin1 = 9;    // LED connected to digital pin 9
int ledPin2 = 10;
int ledPin3 = 11;
int RedValue = 0;
int GreenValue = 0;
int BlueValue = 0;

long t = 1; //time

void setup() {
  // nothing happens in setup
}

void loop() {

  analogWrite(ledPin1, RedValue);
  analogWrite(ledPin2, GreenValue);
  analogWrite(ledPin3, BlueValue);
  
RedValue = 126 + (126*sin(t*0.1003)); // calculates the RedValue
GreenValue = 126 + (126*sin(t*0.1007)); // calculates the GreenValue
BlueValue = 126 + (126*sin(t*0.1009)); // calculates the BlueValue
delay (100);
  t++; // increases the time by 1
  
}
