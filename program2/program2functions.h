// Copyright 2025 Kevon Lindsey
// Prototypes for programfunctions2.cc

#ifndef _PROGRAM2_FUNCTIONS_H_
#define _PROGRAM2_FUNCTIONS_H_

// Determines if the year is a leap year
bool LeapYear(int year);

// Returns the number of days in the month
int LastDayOfMonth(int month, int year = 0);

// Determines if the date is valid
bool ValidDate(int month, int day, int year);

// Updates the date to the next date
void NextDate(int& month, int& day, int& year);

// Updates the date to the previous date
void PreviousDate(int& month, int& day, int& year);

#endif
