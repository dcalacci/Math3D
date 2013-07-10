#include "Math3D.h"

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

namespace Math3D {

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
