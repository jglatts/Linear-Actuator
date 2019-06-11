// Pin defines
// the board is an Uno
#define RELAY_1 4
#define RELAY_2 5


void setup() {
    pinMode(RELAY_1, OUTPUT);
    pinMode(RELAY_2, OUTPUT);
}    


/* Move the actuator down */
void goDown() {
    digitalWrite(RELAY_1, HIGH);
    digitalWrite(RELAY_2, LOW);
}


/* Move the actuator up */
void goUp() {
    digitalWrite(RELAY_1, LOW);
    digitalWrite(RELAY_2, HIGH);
}


/* Stop all movement of the actuator */
void stopActuator() {
    digitalWrite(RELAY_1, LOW);
    digitalWrite(RELAY_2, LOW);
}


void loop() {
    goDown();           // push
    delay(2000);        // wait
    goUp();             // pull
    delay(2000);        // wait    
}
