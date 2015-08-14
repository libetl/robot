#include "RobotEnRoute.h"

#ifndef ROBOTALARRETENCHARGE_H
#define ROBOTALARRETENCHARGE_H

class RobotALarretEnCharge : public RobotEnRoute
{
  static RobotALarretEnCharge ralec ; 
  public:
  RobotALarretEnCharge () ; 
  RobotALarretEnCharge (Robot*) ; 
  void avancer () ; 
  void tourner () ; 
  void poser   () ; 
  void evaluerObjet () ; 
} ; 

#endif
