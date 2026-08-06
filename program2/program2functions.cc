// Copyright 2025 Kevon Lindsey
// contains implementations of functions with prototypes in program2functions.h
#include"program2functions.h"
// ask if i can ignore the cpplint message about this include statement

// Determines if the year is a leap year
bool LeapYear(int year) {
  if ( year % 400 == 0 )
    return true;
  else if ( year % 100 == 0 )
    return false;
  else if ( year % 4 == 0 )
    return true;

  return false;
}

// Returns the number of days in the month
int LastDayOfMonth(int month, int year) {
  if ( month < 1 || month > 12 )
    return 0;

  if ( month == 2 ) {
    if ( year <= 0 )
      return 0;
    else if ( LeapYear(year) )
      return 29;
    else if ( !LeapYear(year) )
      return 28;
  } else if ( month == 1 || month == 3 || month == 5 || month == 7 ||
       month == 8 || month == 10 || month == 12 ) {
    return 31;
  } else if ( month == 4 || month == 6 || month == 9 || month == 11 ) {
    return 30;
  }

  return 0;
}

// Determines if the date is valid
bool ValidDate(int month, int day, int year) {
  if ( (month <= 0 || month > 12) || day <= 0 || year <= 0 )
    return false;

  if ( month == 1 || month == 3 || month == 5 || month == 7 ||
       month == 8 || month == 10 || month == 12 ) {
    if ( day >= 1 && day <= 31 ) {
      return true;
    } else {
      return false;
    }
  } else if ( month == 4 || month == 6 || month == 9 || month == 11 ) {
    if ( day >= 1 && day <= 30 ) {
      return true;
    } else {
        return false;
      }
  } else if ( month == 2 ) {
    if ( LeapYear(year) ) {
      if ( day >= 1 && day <= 29 ) {
        return true;
      } else {
          return false;
        }
    } else if ( !LeapYear(year ) ) {
    if ( day >= 1 && day <= 28 ) {
      return true;
    } else {
        return false;
      }
      }
    }

  return false;
}

// Updates the date to the next date
void NextDate(int& month, int& day, int& year) {
  if ( !ValidDate(month, day, year) ) {
    return;
  }

  if ( month == 1 || month == 3 || month == 5 || month == 7 ||
       month == 8 || month == 10 || month == 12 ) {
    if ( day >= 1 && day < 31 ) {
      day++;
    } else if ( day == 31 ) {
        day = 1;

      if ( month == 12 ) {
        month = 1;
        year++;
      } else {
          month++;
      }
    }
  } else if ( month == 4 || month == 6 || month == 9 || month == 11 ) {
    if ( day >= 1 && day < 30 ) {
      day++;
    } else if ( day == 30 ) {
      day = 1;
      month++;
    }
  } else if ( month == 2 ) {
    if ( LeapYear(year) ) {
      if ( day >= 1 && day < 29 ) {
        day++;
      } else if ( day == 29 ) {
          day = 1;
          month++;
      }
    } else {
        if ( day >= 1 && day < 28 ) {
          day++;
        } else if ( day == 28 ) {
            day = 1;
            month++;
        }
      }
  }
}

// Updates the date to the previous date
void PreviousDate(int& month, int& day, int& year) {
  if ( !ValidDate(month, day, year) )
    return;

  // Previous date of months with 31 days
  if ( month == 1 || month == 3 || month == 5 || month == 7 ||
       month == 8 || month == 10 || month == 12 ) {
    if ( day > 1 && day <= 31 ) {
      day--;
    } else if ( day == 1 ) {
      if ( month == 8 ) {
        day = 31;
        month--;
      } else if ( month == 1 ) {
          day = 31;
          month = 12;
          year--;
        } else if ( month == 3 ) {
            if ( LeapYear(year) ) {
              day = 29;
              month--;
            } else if ( !LeapYear(year) ) {
                day = 28;
                month--;
            }
        } else {
            day = 30;
            month--;
        }
    }
  } else if ( month == 4 || month == 6 || month == 9 || month == 11 ) {
    if ( day > 1 && day <= 30 ) {
      day--;
    } else if ( day == 1 ) {
        day = 31;
        month--;
      }
    } else if ( month == 2 ) {
        if ( day > 1 && day <= 29 ) {
          day--;
    } else if ( day == 1 ) {
        day = 31;
        month--;
      }
      }
}
