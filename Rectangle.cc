// Copyright Khushal Pandala
#include "Rectangle.h"
#include <iostream>

namespace CSCE240_Program6 {

// Constructor
Rectangle::Rectangle(int length, int width, char pixel)
: PixelShape("rectangle", pixel), length_((length > 0) ? length : 2),
width_((width > 0) ? width : 1) {}

// Setters
void Rectangle::SetLength(int length) {
  if (length > 0) {
    length_ = length;
  }
}

void Rectangle::SetWidth(int width) {
  if (width > 0) {
    width_ = width;
  }
}

// Getters
int Rectangle::GetLength() const {
  return length_;
}

int Rectangle::GetWidth() const {
  return width_;
}

// Overloaded *= operator
Rectangle& Rectangle::operator*=(double factor) {
  if (factor > 0 && length_ * factor >= 1 && width_ * factor >= 1) {
    length_ = static_cast<int>(length_ * factor);
    width_ = static_cast<int>(width_ * factor);
  }
  return *this;
}

// Print function
void Rectangle::Print(bool fill) const {
  std::cout << GetName() << std::endl;
  for (int i = 0; i < length_; ++i) {
    for (int j = 0; j < width_; ++j) {
      if (fill || i == 0 || i == length_ - 1 || j == 0 || j == width_ - 1) {
        std::cout << pixel_ << ' ';
      } else {
        std::cout << "  ";
      }
    }
    std::cout << std::endl;
  }
}

}  // namespace CSCE240_Program6
