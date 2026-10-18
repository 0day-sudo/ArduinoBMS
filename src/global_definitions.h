#include <Arduino.h>

struct data_unit {
    uint8_t id;
};

struct Packet {
    int num_units;
    data_unit liste[5];
};


