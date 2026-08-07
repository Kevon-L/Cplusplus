// Copyright 2026 KeVon Lindsey
#include<string>
#include"Zodiacfunctions.h"

using std::string;

// Determines if the date if valid
bool ValidDate(int day, int month) {
    if ( month < 1 || month > 12 )
        return false;

    if ( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||
        month == 10 || month == 12 ) {
        if ( day < 1 || day > 31 )
            return false;
    }

    if ( month == 4 || month == 6 || month == 9 || month == 11 ) {
        if ( day < 1 || day > 30 )
            return false;
    }

    if ( month == 2 ) {
        if ( day < 1 || day > 29 )
            return false;
    }

    return true;
}

// Determines a zodiac sign
string FindZodiac(int day, int month) {
    return "Capricorn";
}
