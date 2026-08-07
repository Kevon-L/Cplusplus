// Copyright 2026 KeVon Lindsey
#ifndef ZODIACFINDER_ZODIACFUNCTIONS_H_
#define ZODIACFINDER_ZODIACFUNCTIONS_H_

#include<string>

using std::string;

// Determines if the date if valid
bool ValidDate(int day, int month);

// Determines a zodiac sign
string FindZodiac(int day, int month);

#endif  // ZODIACFINDER_ZODIACFUNCTIONS_H_
