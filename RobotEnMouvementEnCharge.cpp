#include "RobotEnMouvementEnCharge.h"

RobotEnMouvementEnCharge RobotEnMouvementEnCharge::remec ; 

RobotEnMouvementEnCharge::RobotEnMouvementEnCharge () : RobotEnRoute ("enMouvementEnCharge", NULL, this)
{
  MSG(RobotEnMouvementEnCharge::RobotEnMouvementEnCharge ())
}

RobotEnMouvementEnCharge::RobotEnMouvementEnCharge (Robot* r) : RobotEnRoute ("enMouvementEnCharge", r, this)
{
  MSG(RobotEnMouvementEnCharge::RobotEnMouvementEnCharge (Robot*))
}
