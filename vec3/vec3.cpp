#include "vec3.h"

vec3::vec3() {
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
}

vec3::vec3(double v1, double v2, double v3) {
    v[0] = v1;
    v[1] = v2;
    v[2] = v3;
}

vec3 vec3::operator+(const vec3& r) {
    return vec3(this->v[0] + r.v[0], this->v[1] + r.v[1], this->v[2] + r.v[2]);
}

vec3 vec3::operator-(const vec3& r) {
    return vec3(this->v[0] - r.v[0], this->v[1] - r.v[1], this->v[2] - r.v[2]);
}
vec3 vec3::operator*(double a) {
    return vec3(v[0]*a, v[1]*a, v[2]*a);
}

vec3 vec3::operator/(double a) {
    return vec3(v[0]/a, v[1]/a, v[2]/a);
}

std::ostream& operator<< (std::ostream &out, const vec3 &r) {
    out << "x: " << r.v[0] << " y: " << r.v[1] << " z: " << r.v[2] << "\n";

    return out;
}
