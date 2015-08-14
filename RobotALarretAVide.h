#include "RobotEnRoute.h"

#ifndef ROBOTALARRETAVIDE_H
#define ROBOTALARRETAVIDE_H

class RobotALarretAVide : public RobotEnRoute
{
  static RobotALarretAVide ralav ; 
  public:
  RobotALarretAVide () ; 
  RobotALarretAVide (Robot*) ; 
  void avancer () ; 
  void tourner () ; 
  void saisir  () ;
  void evaluerObstacle () ; 
} ; 

#endif
