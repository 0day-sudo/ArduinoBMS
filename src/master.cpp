#include <Arduino.h>
#include <Softwareserial.h>

// Klasse die eine Unit repraesentiert 
class Unit {
private:
    int id;

public:
    Unit(int u) {
        id = u;
    }

}

// Pin Belegung fuer das Senden mit Softwareserial 
int const rxPin = 10;
int const txPin = 11;

// erstellung der Kommunikationsschnitstelle
Softwareserial sendSerial(rxPin, txPin);

// Baudrahte fuer Serialkommunikation
int const baud = 9600;


void setup() {
    Serial.beginn(baud);

}

void loop() {

}