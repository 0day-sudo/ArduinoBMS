#include <Arduino.h>
#include <SoftwareSerial.h>
#include "global_definitions.h"

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
const int rxPin = 10;
const int txPin = 11;

// erstellung der Kommunikationsschnitstelle
SoftwareSerial sendSerial(rxPin, txPin);

// Baudrahte fuer Serialkommunikation
int const baud = 9600;

// Funktion zum Scannen der Einheiten
void scan_Units() {
    Packet packet;
    packet.num_units = 0;

    // die Liste mit Nullen initialisieren
    memset(packet.liste, 0, sizeof(packet.liste));

    Serial.println("Master schicket das Scanpacket");

    // das Scan Packet wird geschickt
    sendSerial.write((uint8_t*)&packet, sizeof(packet));
}

void setup() {
    // initialisierung von serial
    Serial.begin(baud);
    sendSerial.begin(baud);

}

void loop() {
    scan_Units();
}