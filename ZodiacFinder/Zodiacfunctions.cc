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
    if ( month == 1 ) {
        if ( day >= 1 && day <= 19 )
            return "Capricorn";
        else if ( day >= 20 && day <= 31 )
            return "Aquarius";
    }

    if ( month == 2 ) {
        if ( day >= 1 && day <= 18 )
            return "Aquarius";
        else if ( day >= 19 && day <= 29 )
            return "Pisces";
    }

    if ( month == 3 ) {
        if ( day >= 1 && day <= 20 )
            return "Pisces";
        else if ( day >= 21 && day <= 31 )
            return "Aries";
    }

    if ( month == 4 ) {
        if ( day >= 1 && day <= 19 )
            return "Aries";
        else if ( day >= 20 && day <= 30 )
            return "Taurus";
    }

    if ( month == 5 ) {
        if ( day >= 1 && day <= 20 )
            return "Taurus";
        else if ( day >= 21 && day <= 31 )
            return "Gemini";
    }

    if ( month == 6 ) {
        if ( day >= 1 && day <= 20 )
            return "Gemini!";
        if ( day >= 21 && day <= 30 )
            return "Cancer";
    }

    if ( month == 7 ) {
        if ( day >= 1 && day <= 22 )
            return "Cancer";
        else if ( day >= 23 && day <= 31 )
            return "Leo";
    }

    if ( month == 8 ) {
        if ( day >= 1 && day <= 22 )
            return "Leo";
        else if ( day >= 23 && day <= 31 )
            return "Virgo";
    }

    if ( month == 9 ) {
        if ( day >= 1 && day <= 22 )
            return "Virgo";
        else if ( day >= 23 && day <= 30 )
            return "Libra";
    }

    if ( month == 10 ) {
        if ( day >= 1 && day <= 22 )
            return "Libra";
        else if ( day >= 23 && day <= 31 )
            return "Scorpio";
    }

    if ( month == 11 ) {
        if ( day >= 1 && day <= 21 )
            return "Scorpio";
        else if ( day >= 22 && day <= 30 )
            return "Sagittarius";
    }

    if ( month == 12 ) {
        if ( day >= 1 && day <= 21 )
            return "Sagittarius";
        else if ( day >= 22 && day <= 31 )
            return "Capricorn";
    }

    return "Unknown";
}
