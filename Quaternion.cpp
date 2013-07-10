#include "Math3D.h"

namespace Math3D {

  Quaternion::Quaternion() {
    vector = Vector(); scalar = 0.0f;
  }

  Quaternion::Quaternion(const Vector& v, float s) {
    vector = v; scalar = s;
  }

  Quaternion::Quaternion(float w, float x, float y, float z) {
    vector = Vector(x, y, z); scalar = w;
  }

}
