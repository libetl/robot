#include "RobotFige.h"

RobotFige RobotFige::rf ; 

RobotFige::RobotFige () : RobotEtat ("figé", NULL, this)
{
  MSG(RobotFige::RobotFige ())
}

RobotFige::RobotFige (Robot* r, RobotEtat* avant) : RobotEtat ("figé", r)
{
  MSG(RobotFige::RobotFige (Robot*, RobotEtat*))
  robot = r ; 
  etatAvant = avant ; 
}

void RobotFige::setAvant (RobotEtat* avant)
{
  MSG(void RobotFige::setAvant (RobotEtat*))
  etatAvant = avant ; 
}

void RobotFige::repartir ()
{
  MSG(void RobotFige::repartir ())
  robot->setEtat (etatAvant) ; 
}
