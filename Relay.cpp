#include "Relay.h"

Relay::Relay(uint8_t pin) : pin(pin) {
  pinMode(pin, OUTPUT);
  digitalWrite(pin, LOW);
}

void Relay::on() {
  _on = true;
  digitalWrite(pin, _on);
}

void Relay::off() {
  _on = false;
  digitalWrite(pin, _on);
}

void Relay::change() {
  _on = !_on;
  digitalWrite(pin, _on);
}

bool Relay::isOn() const {
  return _on;
}