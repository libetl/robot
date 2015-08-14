#include "RobotEnRoute.h"

#ifndef ROBOTENMOUVEMENTENCHARGE_H
#define ROBOTENMOUVEMENTENCHARGE_H

class RobotEnMouvementEnCharge : public RobotEnRoute
{
  static RobotEnMouvementEnCharge remec ; 
  public:
  RobotEnMouvementEnCharge () ; 
  RobotEnMouvementEnCharge (Robot*) ; 
} ; 

#endif
