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
#include <math.h>

namespace Math3D {

  // General purpose math functions.


  // 3D Math classes.

  class Vector {
  public:
    float x;
    float y;
    float z;

    Vector();
    Vector(float, float, float);

    friend Vector operator+(const Vector&, const Vector&);
    friend Vector operator-(const Vector&, const Vector&);
    friend Vector operator*(const Vector&, float);
    friend float  operator*(const Vector&, const Vector&);

    Vector cross(const Vector&);
    Vector normal();
    float magnitude();
  };

  class Euler {
  public:
    float theta;
    float phi;
    float psi;

    Euler();
    Euler(float, float, float);
  };

  class AxisAngle {
  public:
    float angle;
    Vector axis;

    AxisAngle();
    AxisAngle(const Vector&, float);
    AxisAngle(float, float, float, float);
  };

  class Complex {
  public:
    float a;
    float b;

    Complex();
    Complex(float, float);
  };

  class Quaternion {
  public:
    float scalar;
    Vector vector;

    Quaternion();
    Quaternion(const Vector&, float);
    Quaternion(float, float, float, float);
  };

  class Matrix {
  public:
    // TODO: Figure this out, it'll be a 3x3 matrix.
  };

  class Matrix4D {
  public:
    // TODO: Like `Matrix` but on 4 dimensions.
  };

}
