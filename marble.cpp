#include "marble.h"

Particle::Particle(float pX, float pY, float pZ, float dX, float dY, float dZ)
    : position(pX,pY,pZ)
    , direction(dX, dY,dZ)
    , speed(1)
    , size(4)
    , is_permanent(false)
{}