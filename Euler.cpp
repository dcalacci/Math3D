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

/*
Given an Euler angle of theta = 30°, phi = 15° and psi = 75°, the represented
rotation can only be determined if there is a set order to apply the rotations.
This class applies rotation is the order provided,
- theta (yaw),
- phi   (pitch),
- psi   (roll).

We'll follow the "Right Hand Rule", meaning that a rotation of positive 15°
is a rotation in the direction of your fingers if you were to point your thumb
in the direction of the relevant axis.
*/

  Euler::Euler() {
    theta = Angle(0.0f); phi = Angle(0.0f); psi = Angle(0.0f);
  }

  Euler::Euler(const Angle& a, const Angle& b, const Angle& c) {
    theta = a; phi = b; psi = c;
  }

  Euler::Euler(float a, float b, float c, Angle::Units unit) {
    theta = Angle(a, unit); phi = Angle(b, unit); psi = Angle(c, unit);
  }

  Euler fromPitchRollYaw(Angle pitch, Angle roll, Angle yaw) {
    return Euler(yaw, pitch, roll);
  }

  Euler fromPitchRollYaw(float p, float r, float y, Angle::Units unit) {
    return Euler(y, p, r, unit);
  }

}
