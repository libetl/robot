#include "RobotEnMouvementAVide.h"

RobotEnMouvementAVide RobotEnMouvementAVide::remac ; 

RobotEnMouvementAVide::RobotEnMouvementAVide () : RobotEnRoute ("enMouvementAVide", NULL, this)
{
  MSG(RobotEnMouvementAVide::RobotEnMouvementAVide ())
}

RobotEnMouvementAVide::RobotEnMouvementAVide (Robot* r) : RobotEnRoute ("enMouvementAVide", r, this)
{
  MSG(RobotEnMouvementAVide::RobotEnMouvementAVide (Robot*))
}
