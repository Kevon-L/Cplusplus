// Copyright 2026 KeVon Lindsey

#include<iostream>
#include<string>
#include"Apple.h"

using std::string;

    Apple::Apple() : type("Gala"), weight(0.0), price(0.0) {}

    Apple::Apple(string type, double weight, double price) {
        if ( type == "Red Delicious" || type == "Golden Delicious" ||
             type == "Gala" || type == "Granny Smith" ) {
            this->type = type;
        } else
            this->type = "Gala";

        if(weight >= 0 && weight <= 2)
            this->weight = weight;
        else
            this->weight = 0.0;
        
        if(price >= 0)
            this->price = price;
        else
            this->price = 0.0;
    }

    string Apple::getType() const {
        return type;
    }

    void Apple::setType(string type) {
        if ( type == "Red Delicious" || type == "Golden Delicious" ||
             type == "Gala" || type == "Granny Smith" ) {
            this->type = type;
        } else
            this->type = "Gala";
    }

    double Apple::getWeight() const {
        return weight;
    }

    void Apple::setWeight(double weight) {
        if(weight >= 0 && weight <= 2)
            this->weight = weight;
        else
            this->weight = 0.0;
    }

    double Apple::getPrice() const {
        return price;
    }

    void Apple::setPrice(double price) {
        if(price >= 0)
            this->price = price;
        else
            this->price = 0.0;
    }

    bool Apple::Equals(const Apple &apple) const {
        return (type == apple.getType()) && (weight == apple.getWeight())
                && price == apple.getPrice();
    }

    string Apple::print() {
        return "Type: " + type + " Weight: " + std::to_string(weight) + " Price: " + std::to_string(price);
    }
