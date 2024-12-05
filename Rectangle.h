// Copyright Khushal Pandala
#ifndef CSCE240_ASSIGNMENT6_RECTANGLE_H_
#define CSCE240_ASSIGNMENT6_RECTANGLE_H_

#include "PixelShape.h"

namespace CSCE240_Program6 {

class Rectangle : public PixelShape {
 public:
  // Constructor with default arguments, marked explicit
  explicit Rectangle(int length = 2, int width = 1, char pixel = '*');

  // Virtual destructor
  virtual ~Rectangle() = default;

  // Setters
  void SetLength(int length);
  void SetWidth(int width);

  // Getters
  int GetLength() const;
  int GetWidth() const;

  // Overloaded *= operator
  Rectangle& operator*=(double factor) override;

  // Virtual print function
  void Print(bool fill = true) const override;

 private:
  int length_;
  int width_;
};

}  // namespace CSCE240_Program6

#endif  // CSCE240_ASSIGNMENT6_RECTANGLE_H_
