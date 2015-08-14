#include "RobotALarretAVide.h"
#include "RobotALarretEnCharge.h"
#include "RobotEnMouvementEnCharge.h"
#include "CommandeAvancer.h"
#include "CommandeTourner.h"
#include "CommandePeserObjet.h"
#include "CommandePoser.h"

RobotALarretEnCharge RobotALarretEnCharge::ralec ; 

RobotALarretEnCharge::RobotALarretEnCharge () : RobotEnRoute ("ALarretEnCharge", NULL, this)
{
  MSG(RobotALarretAVide::RobotALarretEnCharge ())
}

RobotALarretEnCharge::RobotALarretEnCharge (Robot* r = NULL) : RobotEnRoute ("ALarretEnCharge", r, this)
{
  MSG(RobotALarretAVide::RobotALarretEnCharge (Robot*))
}

void RobotALarretEnCharge::avancer ()
{
  MSG (void RobotALarretEnCharge::avancer ())
  string a ("enMouvementEnCharge") ;
  robot->setEtat ((*RobotEtat::etats) [a]) ; 
}

void RobotALarretEnCharge::tourner ()
{
  MSG(void RobotALarretEnCharge::tourner ())
  string a ("enMouvementEnCharge") ;
  robot->setEtat ((*RobotEtat::etats) [a]) ; 
}

void RobotALarretEnCharge::poser   ()
{
  MSG (void RobotALarretEnCharge::poser ())
  string a ("ALarretAVide") ; 
  robot->setEtat ((*RobotEtat::etats) [a]) ; 
}

void RobotALarretEnCharge::evaluerObjet ()
{
  MSG (void RobotALarretEnCharge::evaluerObjet ())
}
