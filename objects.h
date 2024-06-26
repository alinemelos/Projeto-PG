#ifndef OBJECT
#define OBJECT
#include "ray.h"
#include "vector.h"

class Object {
public:
    Vector color;
    double kd, ks, ka, kr, kt, nrugo;

    Object(Vector color, double kd, double ks, double ka, double kr, double kt, double nrugo)
        : color(color), kd(kd), ks(ks), ka(ka), kr(kr), kt(kt), nrugo(nrugo) {}

    virtual ~Object() = default;

    virtual double intersect(const ray &r) = 0;
};

#endif
