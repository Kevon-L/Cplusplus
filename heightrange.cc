// Copyright 2025 Kevon Lindsey
#include"heightrange.h"
using std::string;
#include<string>

void HeightRange::SetShortest(const Height& shortest) {
  Height s = shortest;
  s.ConvertUnits(tallest_.GetUnits());  // compare correct units

  if ( !(s.GetValue() > tallest_.GetValue()) )
    shortest_ = shortest;
}

void HeightRange::SetTallest(const Height& tallest) {
  Height t = tallest;
  t.ConvertUnits(shortest_.GetUnits());  // compare correct units

  if ( !(t.GetValue() < shortest_.GetValue()) )
    tallest_ = tallest;
}

HeightRange::HeightRange() : shortest_(Height(0, "feet")),
                             tallest_(Height(0, "feet")) {}

HeightRange::HeightRange(const Height& shortest, const Height& tallest)
                         : shortest_(shortest),
                           tallest_(tallest) {
  Height s = shortest_;

  s.ConvertUnits(tallest_.GetUnits());
  if ( s.GetValue() > tallest_.GetValue() ) {
    Height temp = shortest_;
    shortest_ = tallest_;  // swap shortest_ and tallest_ if they're wrong
    tallest_ = temp;
  }
}

bool HeightRange::InRange(const Height& h, bool include) const {
  Height s = shortest_;
  Height compare = h;
  Height t = tallest_;

  compare.ConvertUnits(s.GetUnits());  // compare in correct units
  t.ConvertUnits(s.GetUnits());        // convert t as well

  // swap tallest and shortest if necessary
  if (s.GetValue() > t.GetValue()) {
    Height temp = s;
    s = t;  // swap shortest_ and tallest_ if they're reversed
    t = temp;
  }

  double value = compare.GetValue();
  double low = s.GetValue();
  double high = t.GetValue();

  // helps with rounding issues
  const double eps = 1e-6;

  if ( include ) {  // if endpoints are included
    if ( (low - eps) <= value && value <= (high + eps) )
      return true;
    else
      return false;
  } else if (!include) {  // if endpoints aren't included
    if (value <= low + eps)
      return false;
    if (value >= high - eps)
      return false;

    if ( low < value && value < high )
      return true;
    else
      return false;
  }

  return false;
}


Height HeightRange::Width() const {
  string unit = tallest_.GetUnits();
  Height shortest = shortest_;

  shortest.ConvertUnits(unit);

  double width = tallest_.GetValue() - shortest.GetValue();

  if ( width < 0.0 )
    width = 0.0;

  Height h(width, unit);  // Height representing the width

  return h;
}
