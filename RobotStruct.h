#include "Position.h"
#include "Direction.h"
#include "Obstacle.h"
#include "Objet.h"


#ifndef ROBOTSTRUCT_H
#define ROBOTSTRUCT_H

struct RobotStruct {
  Position   p ; 
  Direction  d ; 
  Obstacle obs ; 
  Objet      o ; 
  string     e ; 
} ; 

#endif
