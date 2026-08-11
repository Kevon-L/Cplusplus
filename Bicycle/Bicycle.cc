// Copyright 2026 KeVon Lindsey

#include<iostream>
#include<string>
#include"Bicycle.h"

using std::string;

class Bicycle {
 public:
    Bicycle() : make("none"), fWheel(), bWheel(), frame() {}

    Bicycle(string make, Wheel fWheel, Wheel bWheel, Frame frame)
            : make(make), fWheel(fWheel), bWheel(bWheel), frame(frame) {}

    string getMake() const { return make; }

    void setMake(string make) { this->make = make; }

    Wheel getFrontWheel() const { return fWheel; }

    void setFrontWheel(Wheel fWheel) { this->fWheel = fWheel; }

    Wheel getBackWheel() const { return bWheel; }

    void setBackWheel(Wheel bWheel) { this->bWheel = bWheel; }

    Frame getFrame() const { return frame; }

    void setFrame(Frame frame) { this->frame = frame; }

    bool Equals(const Bicycle &bicycle) const {
      return this->make == bicycle.getMake() && this->fWheel ==
             bicycle.getFrontWheel() && this->bWheel == this->getBackWheel() &&
             this->frame == bicycle.getFrame();
    }

 private:
    string make;
    Wheel fWheel;
    Wheel bWheel;
    Frame frame;
};
