int pirpin = 3;
int relaypin = 4;
int val = 0;

// my relay was inversed, so whenever you see "digitalWrite(relaypin, HIGH)" it is turning off the relay, vice versa

void setup() {
    pinMode(pirpin, INPUT);
    pinMode(relaypin, OUTPUT);
    
    digitalWrite(relaypin, HIGH); // Turn the relay off
    delay(15000); // let the PIR sensor configure
}

void loop() {
    val = digitalRead(pirpin);  // read input value
    if (val == HIGH) {            // check if the input is HIGH
        digitalWrite(relaypin, LOW);  // turn LED ON
        delay(15000);  
        digitalWrite(relaypin, HIGH); // turn LED OFF
        delay(1000);
    } else if (val == LOW) {
        digitalWrite(relaypin, HIGH); // turn LED OFF
        delay(1000);
    }
}