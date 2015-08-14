#ifndef ROBOTOBSERVATEUR_H
#define ROBOTOBSERVATEUR_H

#include "Commun.h"

class RobotObservateur
{

  public:
  RobotObservateur  () { MSG(RobotObservateur::RobotObservateur ()) } 
  virtual ~RobotObservateur () {} 
  virtual void maj  () = 0 ; 

} ; 

#endif
