// Copyright 2025 KeVon Lindsey
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    // Variables (seconds, minutes, hours, and input number)
    int seconds, minutes, hours = 0, fastest_seconds = 0, fastest_minutes = 0,
    fastest_hours = 0, total_seconds = 0, total_minutes = 0, total_hours = 0,
    input_number = 0;

    char c1, c2, c3, c4, c5;

    // Take in minutes and seconds until the loop ends
    while (true) {
        cin >> c1;

        // Printing total valid times read then stopping
        if (c1 == 'q') {
            cout << input_number << " valid time" <<
            (input_number == 1 ? "" : "s") << " read." << endl;

            break;
        }

        cin >> c2 >> c3 >> c4 >> c5;

        minutes = (((c1 - '0') * 10) + (c2 - '0'));
        seconds = (((c4 - '0') * 10) + (c5 - '0'));

        if ( (seconds >= 60 || seconds < 0) || minutes < 0 ) {
            cout << "Input " << (input_number + 1)
            << " did not match expected format.\n"
            << "Fastest and total running times are based on the first "
            << input_number << " valid times read." << endl;

            break;
        }

        total_seconds += seconds;
        total_minutes += minutes;

        // The first time is automatically the fastest until more are added
        if (input_number == 0) {
            fastest_seconds = seconds;
            fastest_minutes = minutes;
            fastest_hours = hours;
        }

        // Determining the fastest time
        if (hours < fastest_hours || (minutes < fastest_minutes && hours ==
            fastest_hours) || (seconds < fastest_seconds && minutes ==
            fastest_minutes && hours == fastest_hours)) {
            fastest_seconds = seconds;
            fastest_minutes = minutes;
            fastest_hours = hours;
        }

        input_number++;
    }

    while (total_seconds >= 60) {
        total_seconds -= 60;
        total_minutes++;
    }

    while (total_minutes >= 60) {
        total_minutes -= 60;
        total_hours++;
    }

    // Printing output
    if (fastest_hours > 0) {
        cout << "Fastest mile time: " << fastest_hours << ':' <<
        (fastest_minutes <= 9 ? "0" : "") << fastest_minutes << ':' <<
        (fastest_seconds <= 9 ? "0" : "") << fastest_seconds << endl;
    } else {
        cout << "Fastest mile time: " << (fastest_minutes <= 9 ? "0" : "") <<
        fastest_minutes << ':' << (fastest_seconds <= 9 ? "0" : "") <<
        fastest_seconds << endl;
    }

    if (total_hours > 0) {
        cout << "Total running time: " << total_hours << ':' <<
        (total_minutes <= 9 ? "0" : "") << total_minutes << ':' <<
        (total_seconds <= 9 ? "0" : "") << total_seconds << endl;
    } else {
        cout << "Total running time: " << (total_minutes <= 9 ? "0" : "") <<
        total_minutes << ':' << (total_seconds <= 9 ? "0" : "") <<
        total_seconds << endl;
    }

    return 0;
}
