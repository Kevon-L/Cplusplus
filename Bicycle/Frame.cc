// Copyright 2026 KeVon Lindsey

#include<iostream>
#include<string>
#include"Frame.h"

using std::string;

Frame::Frame() : size(18.5), type("Diamond") {}

Frame::Frame(double size, string type) {
    if ( 18.5 <= size && size <= 60 )
        this->size = size;
    else
        this->size = 18.5;

    if ( type == "Diamond" || type == "Step-Through" || type == "Truss" ||
         type == "Penny-Farthing" )
        this->type = type;
    else
        this->type = "Diamond";
}

double Frame::getSize() const { return size; }

void Frame::setSize(double size) {
    if ( 18.5 <= size && size <= 60 )
        this->size = size;
    else
        this->size = 18.5;
}

string Frame::getType() const { return type; }

void Frame::setType(string type) {
    if ( type == "Diamond" || type == "Step-Through" || type == "Truss" ||
         type == "Penny-Farthing" )
        this->type = type;
    else
        this->type = "Diamond";
}

bool Frame::Equals(const Frame &frame) const {
    return size == frame.getSize() && type == frame.getType();
}

string Frame::toString() {
    return "[Frame] Size: " + to_string(size) + " Type: " + type;
}
