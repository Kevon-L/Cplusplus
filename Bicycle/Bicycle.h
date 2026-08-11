// Copyright 2026 KeVon Lindsey

#ifndef BICYCLE_BICYCLE_H_
#define BICYCLE_BICYCLE_H_

#include<iostream>
#include<string>

using std::string;

class Bicycle {
 public:
    Bicycle();

    Bicycle(string make, Wheel fWheel, Wheel bWheel, Frame frame);

    string getMake() const;

    void setMake(string make);

    Wheel getFrontWheel() const;

    void setFrontWheel(Wheel fWheel);

    Wheel getBackWheel() const;

    void setBackWheel(Wheel bWheel);

    Frame getFrame() const;

    Frame setFrame(Frame frame);

    bool Equals(const Bicycle &bicycle) const;

 private:
    string make;
    Wheel fWheel;
    Wheel bWheel;
    Frame frame;
};
#endif  // BICYCLE_BICYCLE_H_
