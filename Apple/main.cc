// Copyright 2026 KeVon Lindsey

#include<iostream>
#include<string>
#include"Apple.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    cout << "Welcome to the apple tester\n" << endl;

    cout << "Creating a default apple...\n" << endl;
    Apple one;

    cout << "Printing the default apple's value" << endl;
    cout << one.print() << "\n" << endl;

    cout << "Creating another apple..." << endl;
    Apple two;

    cout << "Setting the new apple's values to the following, valid values:" << endl;
    cout << "Granny Smith 0.75 0.99\n" << endl;
    two.setType("Granny Smith");
    two.setWeight(0.75);
    two.setPrice(0.99);

    cout << "Printing the new apple's values" << endl;
    cout << two.print() << "\n" << endl;

    cout << "Creating another default apple..." << endl;
    Apple three;

    cout << "Setting the apple's values to the following, invalid values:" << endl;
    cout << "iPad 2.5 -200\n" << endl;
    three.setType("iPad");
    three.setWeight(2.5);
    three.setPrice(-200);

    cout << "Printing the newest apple's values which should not have changed from the default values" << endl;
    cout << three.print() << "\n" << endl;

    cout << "Checking if the first and last apple have the same values." << endl;
    cout << (one.Equals(three) ? "True" : "False") << endl;

    return 0;
}
