#ifndef ROBOTOBSERVATEURCONCRET_H
#define ROBOTOBSERVATEURCONCRET_H

#include "Robot.h"
#include "RobotObservateur.h"


class RobotObservateurConcret : public RobotObservateur
{
  private:
  Robot* robot ; 
  
  public:
  RobotObservateurConcret (Robot*) ; 
  void maj () ; 

} ; 

#endif
