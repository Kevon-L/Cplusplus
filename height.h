// Copyright 2025 Kevon Lindsey
#ifndef HEIGHT_H_
#define HEIGHT_H_

#include<string>
using std::string;
#include<iostream>
using std::ostream;

class Height {
  friend ostream& operator << (ostream&, const Height&);

 public:
  double GetValue() const { return value_; }
  string GetUnits() const { return unit_; }

  bool SetValue(double value);
  bool SetUnits(string unit);

  void ConvertUnits(string newUnit);

  explicit Height(double value = 0, string unit = "feet");

 private:
  double value_;
  string unit_;
};



#endif
