#include "RobotEnRoute.h"

#ifndef ROBOTENMOUVEMENTAVIDE_H
#define ROBOTENMOUVEMENTAVIDE_H

class RobotEnMouvementAVide : public RobotEnRoute
{
  static RobotEnMouvementAVide remac ; 
  public:
  RobotEnMouvementAVide () ; 
  RobotEnMouvementAVide (Robot*) ; 
} ; 

#endif
