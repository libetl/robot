#ifndef ROBOT_FIGE
#define ROBOT_FIGE

#include "RobotEtat.h"

class RobotFige : public RobotEtat
{

  static RobotFige rf ; 
  
  private: 
  RobotEtat* etatAvant ; 
  public:
  RobotFige () ;
  RobotFige (Robot*, RobotEtat*) ;
  void setAvant     (RobotEtat*) ; 
  void repartir  () ; 
} ; 

#endif
