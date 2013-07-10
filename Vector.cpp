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
