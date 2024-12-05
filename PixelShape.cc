// Copyright Khushal Pandala
#include "PixelShape.h"
#include <iostream>
#include <string>  // Include for std::string

namespace CSCE240_Program6 {

// Constructor
PixelShape::PixelShape(const std::string& name, char pixel)
: name_(name.empty() ? "?" : name), pixel_(pixel) {
  if (pixel < 33 || pixel > 126) {
    pixel_ = '*';
  }
}

// Setters
void PixelShape::SetName(const std::string& name) {
  if (!name.empty()) {
    name_ = name;
  }
}

void PixelShape::SetPixel(char pixel) {
  if (pixel >= 33 && pixel <= 126) {
    pixel_ = pixel;
  }
}

// Getters
std::string PixelShape::GetName() const {
  return name_;
}

char PixelShape::GetPixel() const {
  return pixel_;
}

// Print function
void PixelShape::Print(bool fill) const {
  std::cout << name_ << std::endl;
}

// Default implementation for operator*=
PixelShape& PixelShape::operator*=(double factor) {
  // This is a default implementation to make PixelShape non-abstract
  return *this;
}

}  // namespace CSCE240_Program6
