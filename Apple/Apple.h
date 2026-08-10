// Copyright 2026 KeVon Lindsey

#ifndef APPLE_APPLE_H_
#define APPLE_APPLE_H_

#include<iostream>
#include<string>

using std::string;

class Apple {
 public:
    Apple();

    Apple(string, double, double);

    string getType() const;

    void setType(string);

    double getWeight() const;

    void setWeight(double);

    double getPrice() const;

    void setPrice(double);

    bool Equals(const Apple &apple) const;

    string print();

 private:
    string type;
    double weight;
    double price;
};
#endif  // APPLE_APPLE_H_
