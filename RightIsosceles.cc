// Copyright Khushal Pandala
#include "RightIsosceles.h"
#include <iostream>

namespace CSCE240_Program6 {

// Constructor
RightIsosceles::RightIsosceles(int leg, char pixel)
: PixelShape("right isosceles triangle"
, pixel), leg_((leg >= 2) ? leg : 2) {}

// Setters
void RightIsosceles::SetLeg(int leg) {
  if (leg >= 2) {
    leg_ = leg;
  }
}

// Getters
int RightIsosceles::GetLeg() const {
  return leg_;
}

// Overloaded *= operator
RightIsosceles& RightIsosceles::operator*=(double factor) {
  if (factor > 0 && leg_ * factor >= 2) {
    leg_ = static_cast<int>(leg_ * factor);
  }
  return *this;
}

// Print function
void RightIsosceles::Print(bool fill) const {
  std::cout << GetName() << std::endl;
  for (int i = 0; i < leg_; ++i) {
    for (int j = 0; j <= i; ++j) {
      if (fill || j == 0 || j == i || i == leg_ - 1) {
        std::cout << pixel_ << ' ';
      } else {
        std::cout << "  ";
      }
    }
    std::cout << std::endl;
  }
}

}  // namespace CSCE240_Program6
