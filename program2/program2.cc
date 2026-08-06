// Copyright 2025 Kevon Lindsey
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include"program2functions.h"

int main() {
  int start_month, start_day, start_year, end_month, end_day, end_year,
  month1, day1, year1, month2, day2, year2;

  char slash = '/';

  cin >> month1 >> day1 >> year1;
  cin >> month2 >> day2 >> year2;

  start_month = month1;
  start_day = day1;
  start_year = year1;
  end_month = month2;
  end_day = day2;
  end_year = year2;

  // Checking if the dates are valid
  if ( !ValidDate(month1, day1, year1) ) {
    cout << month1 << slash << day1 << slash << year1
    << " is not a valid date" << endl;

    if ( !ValidDate(month2, day2, year2) ) {
      cout << month2 << slash << day2 << slash << year2
      << " is not a valid date" << endl;
      return 0;
    }

    return 0;
  }

  int day_difference = 0;

  // finding the number of days the first date is before
  // or after the second date by moving forward
  // or backward until it reaches that date
  if ( (year1 == year2) && (month1 == month2) && (day1 == day2) ) {
    day_difference = 0;
  } else if ( (year1 > year2) || ((year1 == year2) && (month1 > month2))
  || ((year1 == year2) && (month1 == month2) && (day1 > day2)) ) {
    // keep looping until the dates are equal
    while ( !((year1 == year2) && (month1 == month2) && (day1 == day2)) ) {
      PreviousDate(month1, day1, year1);
      day_difference++;
    }
  } else {
      while ( !((year1 == year2) && (month1 == month2) && (day1 == day2)) ) {
        NextDate(month1, day1, year1);
        day_difference++;
      }
  }

  cout << start_month << slash << start_day << slash << start_year <<
  " is " << day_difference << (((start_year > end_year) ||
  ((start_year == end_year) && (start_month > end_month)) ||
  ((start_year == end_year) && (start_month == end_month) &&
  (start_day > end_day))) ? " days after " : " days before ")
  << end_month << slash << end_day << slash << end_year << endl;

  return 0;
}
