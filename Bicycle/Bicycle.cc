// Copyright 2026 KeVon Lindsey

#include<iostream>
#include<string>
#include"Bicycle.h"

using std::string;

Bicycle::Bicycle() : make("none"), fWheel(), bWheel(), frame() {}

Bicycle::Bicycle(string make, Wheel fWheel, Wheel bWheel, Frame frame)
                 : fWheel(fWheel), bWheel(bWheel), frame(frame) {
    if ( !make.empty() )
      this->make = make;
    else
      this->make = "none";
}

string Bicycle::getMake() const { return make; }

void Bicycle::setMake(string make) {
    if ( !make.empty() )
      this->make = make;
    else
      this->make = "none";
}

Wheel Bicycle::getFrontWheel() const { return fWheel; }

void Bicycle::setFrontWheel(Wheel fWheel) { this->fWheel = fWheel; }

Wheel Bicycle::getBackWheel() const { return bWheel; }

void Bicycle::setBackWheel(Wheel bWheel) { this->bWheel = bWheel; }

Frame Bicycle::getFrame() const { return frame; }

void Bicycle::setFrame(Frame frame) { this->frame = frame; }

bool Bicycle::Equals(const Bicycle &bicycle) const {
    return make == bicycle.getMake() && fWheel == bicycle.getFrontWheel() &&
           bWheel == bicycle.getBackWheel() && frame == bicycle.getFrame();
}

string Bicycle::toString() {
    return "[Bicycle] Make: " + make + " Front Wheel: " + fWheel.toString()
           + " Back Wheel: " + bWheel.toString() + " Frame: "
           + frame.toString;
}
