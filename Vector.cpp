/*
The MIT License (MIT)

Copyright (c) 2013 Nathan Lilienthal

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
===============================================================================
*/
#include "Math3D.h"

namespace Math3D {

  Vector::Vector() {
    x = 0.0f; y = 0.0f; z = 0.0f;
  }

  Vector::Vector(float a, float b, float c) {
    x = a; y = b; z = c;
  }

  Vector operator+(const Vector& v1, const Vector& v2) {
    return Vector(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
  }

  Vector operator-(const Vector& v1, const Vector& v2) {
    return Vector(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
  }

  Vector operator*(const Vector& v, float scalar) {
    return Vector(v.x * scalar, v.y * scalar, v.z * scalar);
  }

  float operator*(const Vector& v1, const Vector& v2) {
    return (v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z);
  }

  Vector Vector::cross(const Vector& v) {
    return Vector(y * v.z - v.y * z, z * v.x - v.z * x, x * v.y - v.x * y);
  }

  Vector Vector::normal() {
    float mag = magnitude();
    return Vector(x/mag, x/mag, x/mag);
  }

  float Vector::magnitude() {
    return sqrt(x*x + y*y + z*z);
  }

}
