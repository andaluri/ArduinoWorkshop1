
const int  buttonPin = 2;    // the pin that the pushbutton is attached to
const int  ledPin = 11;

int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button

void setup() {
  // initialize the button pin as a input:
  pinMode(buttonPin, INPUT);

  // initialize serial communication:
  Serial.begin(9600);
}

void loop() {
  
  // read the pushbutton input pin:
  buttonState = digitalRead(buttonPin);

  // compare the buttonState to its previous state
  if (buttonState != lastButtonState) {
    
    // if the state has changed, increment the counter
    if (buttonState == HIGH) {
      
      // if the current state is HIGH then the button
      // wend from off to on:      
      Serial.println("Button is ON");
      digitalWrite(ledPin, HIGH);
      
    } else {
      
      // if the current state is LOW then the button
      // went from on to off:
      Serial.println("Button is OFF"); 
      digitalWrite(ledPin, LOW);
    }
  
  }
  
  // save the current state as the last state, 
  //for next time through the loop
  lastButtonState = buttonState;    
}
