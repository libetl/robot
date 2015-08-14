#include "Robot.h"

#ifndef ROBOTSUJET_H
#define ROBOTSUJET_H

#include "RobotObservateur.h"

class RobotSujet {

  private:
  int nbO ; 
  RobotObservateur** ro ; 

  public:
  RobotSujet   () ; 
  void Attache (RobotObservateur* ro1) ; 
  void Detache () ; 
  void Notifie () ; 
} ; 

#endif
