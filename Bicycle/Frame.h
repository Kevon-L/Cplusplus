// Copyright 2026 KeVon Lindsey

#ifndef BICYCLE_FRAME_H_
#define BICYCLE_FRAME_H_

#include<iostream>
#include<string>

using std::string;

class Frame {
 public:
    Frame();

    Frame(double size, string type);

    double getSize() const;

    void setSize(double size);

    string getType() const;

    void setType(string type);

    bool Equals(const Frame &frame) const;

    string toString();

 private:
    double size;
    string type;
};

#endif  // BICYCLE_FRAME_H_
