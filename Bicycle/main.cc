// Copyright 2026 KeVon Lindsey

#include <iostream>
#include <string>
#include "Zodiacfunctions.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    cout << "---------------------------------\nWelcome to the Bicycle Builder Tester!\n---------------------------------" << endl;

    // Default Bike
    cout << "First we will create a \"Default\" Bicycle" << endl;
	
    Bicycle b01 = new Bicycle();
	
    cout << "Printing the Bicycle's data" << endl;
	cout << "Bicycle's make: " << b01.getMake() << endl;
	cout << "Bicycle's front wheel: Diameter "+b01.getFrontWheel().getDiameter()+" Width: "+b01.getFrontWheel().getWidth() << endl;
	cout << "Bicycle's back wheel: Diameter "+b01.getBackWheel().getDiameter()+" Width: "+b01.getBackWheel().getWidth() << endl;
	cout << "Bicycle's frame: Size: "+b01.getFrame().getSize()+" Type: "+b01.getFrame().getType() << endl;
	cout << "\nTesting the toString method" << endl;
	cout << b01 << endl;
		
	//Setting wrong properties.
	cout << "\nSetting invalid values for the default bike's wheels and frame" << endl;
	b01.setBackWheel(new Wheel(0,0));
	b01.setFrontWheel(new Wheel(10000,10000));
	b01.setFrame(new Frame(0.0, "hexagon"));
	cout << b01 << endl;

	//Param Bike
	cout << "\nCreating another bike using the parameterized constructor" << endl;
	Bicycle b02 = new Bicycle("Big Wheel", new Wheel(55.0,2.5), new Wheel(18.0,2.0),new Frame(60.0, "Penny-Farthing"));
	cout << b02 << endl;
	
	cout << "\nCreating another bike using the parameterized constructor with invalid values" << endl;
	Bicycle b03 = new Bicycle(null, new Wheel(555.0,-2.5), new Wheel(-18.0,22.0),new Frame(-60.0, "dirt"));
	cout << b03 << endl;
	
	//Equals
	cout << "\nChecking the \"equals\" method" << endl;
	cout << "Does the first and third bicycles have different memory addresses? " << (b01!=b03) << endl;
	cout << "Does the first and third bicycles have the same properties? " << b01.equals(b03) << endl;
	cout << "\n---------------------------------\nTests Complete! Goodbye!\n---------------------------------" << endl;

    return 0;
}
