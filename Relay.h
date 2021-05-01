#pragma once
#include <Arduino.h>

class Relay {
uint8_t pin;
bool _on = false;

public:
  Relay(uint8_t pin);
  void on();
  void off();
  void change();
  bool isOn() const;
};