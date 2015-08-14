#include "RobotEtat.h"

#ifndef ROBOT_ENROUTE
#define ROBOT_ENROUTE

class RobotEtat ; 

class RobotEnRoute : public RobotEtat
{
  private:
  
  public:
  RobotEnRoute (string, Robot*, RobotEtat*) ; 
  RobotEnRoute (string, Robot*) ;
  RobotEnRoute (Robot*) ;
  void arreter      () ; 
} ; 

#endif

