#include "Math3D.h"

namespace Math3D {

  AxisAngle::AxisAngle() {
    axis = Vector(); angle = 0.0f;
  }

  AxisAngle::AxisAngle(const Vector& v, const Angle& a) {
    axis = v; angle = a;
  }

  AxisAngle::AxisAngle(const Vector& v, float a, Angle::Units unit) {
    axis = v; angle = Angle(a, unit);
  }

  AxisAngle::AxisAngle(float x, float y, float z, const Angle& a) {
    axis = Vector(x, y, z); angle = a;
  }

  AxisAngle::AxisAngle(float x, float y, float z, float a, Angle::Units unit) {
    axis = Vector(x, y, z); angle = Angle(a, unit);
  }

}
