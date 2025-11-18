// Copyright 2025 Kevon Lindsey
#include"height.h"
#include<string>
using std::string;
#include<iostream>
using std::cout;
using std::endl;

bool Height::SetValue(double value) {
  if ( value >= 0 ) {
    value_ = value;
    return true;
  }

    return false;
}

bool Height::SetUnits(string unit) {
  if ( unit == "inches" || unit == "feet" || unit == "centimeters" ||
       unit == "meters" ) {
    unit_ = unit;
    return true;
  }

  return false;
}

void Height::ConvertUnits(string newUnit) {
  if ( newUnit == "inches" || newUnit == "feet" || newUnit == "centimeters" ||
       newUnit == "meters" ) {
    // convert from inches
    if ( unit_ == "inches" ) {
      if ( newUnit == "feet" ) {
        value_ /= 12.0;
        unit_ = "feet";
      }

      if ( newUnit == "centimeters" ) {
        value_ *= 2.54;
        unit_ = "centimeters";
      }

      if ( newUnit == "meters" ) {
        value_ *= 0.0254;
        unit_ = "meters";
      }
  }

    // convert from feet
    if ( unit_ == "feet" ) {
      if ( newUnit == "inches" ) {
        value_ *= 12.0;
        unit_ = "inches";
      }

      if ( newUnit == "centimeters" ) {
        value_ *= 30.48;
        unit_ = "centimeters";
      }

      if ( newUnit == "meters" ) {
        value_ *= 0.3048;
        unit_ = "meters";
      }
  }

    // convert from centimeters
    if ( unit_ == "centimeters" ) {
      if ( newUnit == "feet" ) {
        value_ /= 30.48;
        unit_ = "feet";
      }

      if ( newUnit == "inches" ) {
        value_ /= 2.54;
        unit_ = "inches";
      }

      if ( newUnit == "meters" ) {
        value_ /= 100.0;
        unit_ = "meters";
      }
  }

    // convert from meters
    if ( unit_ == "meters" ) {
      if ( newUnit == "feet" ) {
        value_ *= 3.28084;
        unit_ = "feet";
      }

      if ( newUnit == "centimeters" ) {
        value_ *= 100;
        unit_ = "centimeters";
      }

      if ( newUnit == "inches" ) {
        value_ *= 39.3701;
        unit_ = "inches";
      }
    }
  }
}

ostream& operator << (ostream& whereto, const Height& h) {
  whereto << h.value_ << " " << h.unit_;

  return whereto;
}

Height::Height(double value, string unit) : value_(0), unit_("feet") {
  SetUnits(unit);
  SetValue(value);
}

