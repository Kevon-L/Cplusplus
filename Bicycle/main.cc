// Copyright 2026 KeVon Lindsey

#include <iostream>
#include <string>
#include "Bicycle.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    cout << "---------------------------------\nWelcome to the Bicycle Builder Tester!\n---------------------------------" << endl;

    // Default Bike
    cout << "First we will create a \"Default\" Bicycle" << endl;

    Bicycle b01;

    cout << "Printing the Bicycle's data" << endl;
    cout << "Bicycle's make: " << b01.getMake() << endl;
    cout << "Bicycle's front wheel: " + b01.getFrontWheel().toString() << endl;
    cout << "Bicycle's back wheel: Diameter " + b01.getBackWheel().toString() << endl;
    cout << "Bicycle's frame: " + b01.getFrame().toString() << endl;
    cout << "\nTesting the toString method" << endl;
    cout << b01.toString() << endl;

    // Setting wrong properties.
    cout << "\nSetting invalid values for the default bike's wheels and frame" << endl;
    b01.setBackWheel(Wheel(0, 0));
    b01.setFrontWheel(Wheel(10000, 10000));
    b01.setFrame(Frame(0.0, "hexagon"));
    cout << b01.toString() << endl;

    // Param Bike
    cout << "\nCreating another bike using the parameterized constructor" << endl;
    Bicycle b02 = Bicycle("Big Wheel", Wheel(55.0, 2.5), Wheel(18.0, 2.0), Frame(60.0, "Penny-Farthing"));
    cout << b02.toString() << endl;

    cout << "\nCreating another bike using the parameterized constructor with invalid values" << endl;
    Bicycle b03("", Wheel(555.0, -2.5), Wheel(-18.0, 22.0), Frame(-60.0, "dirt"));
    cout << b03.toString() << endl;

    // Equals
    cout << "\nChecking the \"equals\" method" << endl;
    cout << "Does the first and third bicycles have different memory addresses? " << (&b01 != &b03 ? "Yes" : "No") << endl;
    cout << "Does the first and third bicycles have the same properties? " << (b01.Equals(b03) ? "Yes" : "No") << endl;
    cout << "\n---------------------------------\nTests Complete! Goodbye!\n---------------------------------";

    return 0;
}
