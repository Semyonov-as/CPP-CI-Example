#ifndef VEC3_H
#define VEC3_H

#include <iostream>


class vec3
{
private:
    double v[3];

public:
    vec3();
    vec3(double v1, double v2, double v3);

    vec3 operator+(const vec3 &r);
    vec3 operator-(const vec3 &r);
    double operator[](int i) {return v[i];}
    vec3 operator*(double a);
    vec3 operator/(double a);

    friend std::ostream& operator<< (std::ostream &out, const vec3 &r);

};

#endif // VEC3_H
