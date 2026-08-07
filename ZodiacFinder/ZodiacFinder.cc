// Copyright 2026 KeVon Lindsey
#include <iostream>
#include <string>
#include "Zodiacfunctions.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    int day, month;
    bool valid = true;

    cout << "I'm going to determine your zodiac sign." << endl;
    cout << endl;

    do {
        cout << "Enter your birthday month as a number" << endl;
        cin >> month;

        cout << endl;

        cout << "Enter your birthday day as a number" << endl;
        cin >> day;

        cout << endl;

        if ( !ValidDate(day, month) ) {
            cout << "Invalid date. Try again." << endl;
            cout << endl;

            continue;
        }

        valid = false;
    } while (valid);

    cout << "Calculating..." << endl;

    cout << endl;

    cout << "You are a " << FindZodiac(day, month) << "!" << endl;

    return 0;
}
