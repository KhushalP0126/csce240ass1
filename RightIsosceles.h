// Copyright Khushal Pandala
#ifndef CSCE240_ASSIGNMENT6_RIGHTISOSCELES_H_
#define CSCE240_ASSIGNMENT6_RIGHTISOSCELES_H_

#include "PixelShape.h"

namespace CSCE240_Program6 {

class RightIsosceles : public PixelShape {
 public:
  // Constructor with default arguments, marked explicit
  explicit RightIsosceles(int leg = 2, char pixel = '*');

  // Virtual destructor
  virtual ~RightIsosceles() = default;

  // Setters
  void SetLeg(int leg);

  // Getters
  int GetLeg() const;

  // Overloaded *= operator
  RightIsosceles& operator*=(double factor) override;

  // Virtual print function
  void Print(bool fill = true) const override;

 private:
  int leg_;
};

}  // namespace CSCE240_Program6

#endif  // CSCE240_ASSIGNMENT6_RIGHTISOSCELES_H_
