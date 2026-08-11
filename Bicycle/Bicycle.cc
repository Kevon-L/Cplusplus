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

   string getMake() const {return make;}

   void setMake(string make) {this->make = make;}

   Wheel getFrontWheel() const;

   void setFrontWheel(Wheel fWheel);

   Wheel getBackWheel() const;

   void setBackWheel(Wheel bWheel);

   Frame getFrame() const;

   void setFrame(Frame frame);

   bool Equals(const Bicycle &bicycle) const;

 private:
    string make;
    Wheel fWheel;
    Wheel bWheel;
    Frame frame;
};
