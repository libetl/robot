#include <pthread.h>

#ifndef ATTENDRE_H
#define ATTENDRE_H

#include "Robot.h"
#include "RobotEtat.h"

struct attendreStruct
{
  Robot* robot ;   
  RobotEtat* etat ; 
} ; 

void* attendre (void* as) ; 

#endif
