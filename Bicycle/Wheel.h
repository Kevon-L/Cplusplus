// Copyright 2026 KeVon Lindsey

#ifndef BICYCLE_WHEEL_H_
#define BICYCLE_WHEEL_H_

#include<iostream>
#include<string>

using std::string;

class Wheel {
 public:
    Wheel();

    Wheel(double diameter, double width);

    double getDiameter();

    void setDiameter(double diameter);

    double getWidth();

    double setWidth(double width);

    bool Equals(const Wheel &wheel) const;

    string toString();

 private:
    double diameter;
    double width;
};

#endif  // BICYCLE_WHEEL_H_
