#pragma once
#include <cmath>
#include "space3d.h"

struct Particle {
	Coord3D position;
	Coord3D velocity;
};

// dynamically allocate memory for a particle and initialize it
Particle* createParticle(double x, double y, double z, double vx, double vy, double vz);

// set its velocity to (vx, vy, vz)
void setVelocity(Particle *p, double vx, double vy, double vz);

// get its current position
Coord3D getPosition(Particle *p);

// update particle's position after elapsed time dt
void move(Particle *p, double dt);

// delete all memory allocated for the particle passed by pointer
void deleteParticle(Particle *p);
