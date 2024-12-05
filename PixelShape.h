// Copyright Khushal Pandala
#ifndef CSCE240_ASSIGNMENT6_PIXELSHAPE_H_
#define CSCE240_ASSIGNMENT6_PIXELSHAPE_H_

#include <string>

namespace CSCE240_Program6 {

class PixelShape {
 public:
  // Constructor with default arguments, marked explicit
  explicit PixelShape(const std::string& name = "?", char pixel = '*');

  // Virtual destructor
  virtual ~PixelShape() = default;

  // Setters
  void SetName(const std::string& name);
  void SetPixel(char pixel);

  // Getters
  std::string GetName() const;
  char GetPixel() const;

  // Virtual print function
  virtual void Print(bool fill = true) const;

  // Implement operator *= so that PixelShape can be instantiated
  virtual PixelShape& operator*=(double factor);

 protected:
  std::string name_;
  char pixel_;
};

}  // namespace CSCE240_Program6

#endif  // CSCE240_ASSIGNMENT6_PIXELSHAPE_H_
