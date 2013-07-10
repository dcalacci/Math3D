#include "Math3D.h"

namespace Math3D {

/*
All Angles are represented under the hood by RADIAN. You don't need to know
about that however.
*/

  Angle::Angle() {
    _radian = 0.0f;
  }

  Angle::Angle(float radian) {
    _radian = radian;
  }

  Angle::Angle(float angle, Units unit) {
    if (unit == RADIAN) {
      _radian = angle;
    } else {
      _radian = angle * M_PI/180;
    }
  }

  float Angle::toRadian() {
    return _radian;
  }

  float Angle::toDegree() {
    return _radian * 180 / M_PI;
  }

}
