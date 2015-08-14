#include "RobotALarretAVide.h"
#include "RobotALarretEnCharge.h"
#include "RobotEnMouvementAVide.h"
#include "CommandeAvancer.h"
#include "CommandeTourner.h"
#include "CommandeEvaluerObstacle.h"
#include "CommandeSaisir.h"

RobotALarretAVide RobotALarretAVide::ralav ; 

RobotALarretAVide::RobotALarretAVide () : RobotEnRoute ("ALarretAVide", NULL, this)
{
  MSG(RobotALarretAVide::RobotALarretAVide ())
}

RobotALarretAVide::RobotALarretAVide (Robot* r) : RobotEnRoute ("ALarretAVide", r, this)
{
  MSG(RobotALarretAVide::RobotALarretAVide (Robot*))
}

void RobotALarretAVide::avancer ()
{
  MSG(void RobotALarretAVide::avancer ())
  string a ("enMouvementAVide") ;
  robot->setEtat ((*RobotEtat::etats) [a]) ; 
}
 
void RobotALarretAVide::tourner ()
{
  MSG(void RobotALarretAVide::tourner ())
  string a ("enMouvementAVide") ;
  robot->setEtat ((*RobotEtat::etats) [a]) ; 
}
 
void RobotALarretAVide::saisir  ()
{
  MSG(void RobotALarretAVide::saisir ())
  string a ("ALarretEnCharge") ;
  robot->setEtat ((*RobotEtat::etats) [a]) ; 
}
 
void RobotALarretAVide::evaluerObstacle ()
{
  MSG(void RobotALarretAVide::evaluerObstacle ())
}
