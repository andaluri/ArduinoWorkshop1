int potPin = 0;    // select the input pin for the potentiometer
int ledPin = 11;   // select the pin for the LED
int val = 0;       // variable to store the value coming from the sensor

void setup() {
  Serial.begin(9600);
 
}

void loop() {
  //val ranges from 0 to 1023
  val = analogRead(potPin);  
  Serial.println(val);
  // ledpin takes a value from 0 to 255, so divide val by 4
  analogWrite(ledPin, val/4);
  delay(500);
}
 
