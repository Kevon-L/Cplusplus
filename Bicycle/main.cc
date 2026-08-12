// Copyright 2026 KeVon Lindsey

#include <iostream>
#include <string>
#include"Bicycle.h"
#include"Frame.h"
#include"Wheel.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    cout << "---------------------------------\nWelcome to the Bicycle Builder Tester!\n---------------------------------" << endl;

    // Default Bike
    cout << "First we will create a \"Default\" Bicycle" << endl;
	
    Bicycle b01;
	
    cout << "Printing the Bicycle's data" << endl;
	cout << "Bicycle's make: " << b01.getMake() << endl;
	cout << "Bicycle's front wheel: Diameter "+b01.getFrontWheel().getDiameter()+" Width: "+b01.getFrontWheel().getWidth() << endl;
	cout << "Bicycle's back wheel: Diameter "+b01.getBackWheel().getDiameter()+" Width: "+b01.getBackWheel().getWidth() << endl;
	cout << "Bicycle's frame: Size: "+b01.getFrame().getSize()+" Type: "+b01.getFrame().getType() << endl;
	cout << "\nTesting the toString method" << endl;
	cout << b01.toString() << endl;

    return 0;
}
