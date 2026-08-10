// Copyright 2026 KeVon Lindsey

#ifndef BICYCLE_BICYCLE_H_
#define BICYCLE_BICYCLE_H_

#include<iostream>
#include<string>

using std::string;

class Bicycle {
 public:
    Bicycle(): make("none") {}

 private:
    string make;
    Wheel frontWheel;
    Wheel backWheel;
    Frame frame;
};
#endif  // BICYCLE_BICYCLE_H_
