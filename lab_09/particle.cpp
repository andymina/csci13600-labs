#include "particle.h"

Particle* createParticle(double x, double y, double z, double vx, double vy, double vz){
	Particle *p = new Particle;
	Coord3D *pos = createCoord3D(x, y, z);
	Coord3D *vel = createCoord3D(vx, vy, vz);

	(*p).position = *pos;
	(*p).velocity = *vel;

	deleteCoord3D(pos);
	deleteCoord3D(vel);

   return p;
}

void setVelocity(Particle *p, double vx, double vy, double vz){
	Coord3D *vel = createCoord3D(vx, vy, vz);
	(*p).velocity = *vel;
	deleteCoord3D(vel);
}

Coord3D getPosition(Particle *p){
	return (*p).position;
}

void move(Particle *p, double dt){
	Coord3D* ptempPos = createCoord3D(getPosition(p).x, getPosition(p).y, getPosition(p).z);
	Coord3D* ptempVel = createCoord3D((*p).velocity.x, (*p).velocity.y, (*p).velocity.z);

	move(ptempPos, ptempVel, dt);

	(*p).position = *ptempPos;

	deleteCoord3D(ptempPos);
	deleteCoord3D(ptempVel);
}


void deleteParticle(Particle *p){
	delete p;
	p = nullptr;
}
