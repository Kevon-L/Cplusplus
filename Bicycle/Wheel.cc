// Copyright 2026 KeVon Lindsey

#include<iostream>
#include<string>

using std::string;

class Wheel {
 public:
    Wheel::Wheel() : diameter(16), width(1) {}

    Wheel::Wheel(double diameter, double width) {
        if ( 16 <= diameter && diameter <= 55 )
            this->diameter = diameter;
        else
            this->diameter = 16;

        if ( 1 <= width && width <= 2.5 )
            this->width = width;
        else
            this->width = 1;
    }

    double Wheel::getDiameter() { return diameter; }

    void Wheel::setDiameter(double diameter) {
        if ( 16 <= diameter && diameter <= 55 )
            this->diameter = diameter;
        else
            this->diameter = 16;
    }

    double Wheel::getWidth() { return width; }

    double Wheel::setWidth(double width);

    bool Wheel::Equals(const Wheel &wheel) const;

    string Wheel::toString();

 private:
    double diameter;
    double width;
};
