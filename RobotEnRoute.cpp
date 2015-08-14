#include "RobotEnRoute.h"

RobotEnRoute::RobotEnRoute (string s, Robot* r, RobotEtat* re) : RobotEtat (s, r, re)
{
  MSG(RobotEnRoute::RobotEnRoute (string, Robot*, RobotEtat*))
}

RobotEnRoute::RobotEnRoute (string s, Robot* r) : RobotEtat (s, r) 
{
  MSG(RobotEnRoute::RobotEnRoute (string, Robot*))
}

RobotEnRoute::RobotEnRoute (Robot* r) : RobotEtat ()
{
  MSG(RobotEnRoute::RobotEnRoute (Robot*))
  robot = r ; 
}

void RobotEnRoute::arreter ()
{
  MSG(void RobotEnRoute::arreter ())
  string a ("figé") ;
  robot->setEtat ((*RobotEtat::etats) [a]) ; 
  ((RobotFige*)(*RobotEtat::etats) [a])->setAvant (this) ; 
}
