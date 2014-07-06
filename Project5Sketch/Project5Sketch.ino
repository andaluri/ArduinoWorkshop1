int lightPin = 0;  //A0 - Analog input for Photo resistor
int ledPin = 11;

int threshold = 400;

void setup(){
    Serial.begin(9600);  //Begin serial communcation
    pinMode(ledPin, OUTPUT);

}

void loop(){
    Serial.println(analogRead(lightPin)); 

    if(analogRead(lightPin) > threshold ){    
        digitalWrite(ledPin, HIGH);
        Serial.println("high"); 
    }else{
        digitalWrite(ledPin, LOW);
        Serial.println("low"); 
    }

    delay(100);
}

