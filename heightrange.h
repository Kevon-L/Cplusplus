// Copyright 2025 Kevon Lindsey
#ifndef HEIGHT_RANGE_H_
#define HEIGHT_RANGE_H_
#include"height.h"

class HeightRange {
 public:
  void SetShortest(const Height& shortest);
  Height GetShortest() const { return shortest_; }

  void SetTallest(const Height& tallest);
  Height GetTallest() const { return tallest_; }

  HeightRange();
  HeightRange(const Height& shortest_, const Height& tallest_);

  bool InRange(const Height& h, bool include = true) const;

  Height Width() const;

 private:
  Height shortest_;
  Height tallest_;
};

#endif
