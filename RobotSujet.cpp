#include "RobotSujet.h"

RobotSujet::RobotSujet () : nbO (0) 
{
  MSG(RobotSujet::RobotSujet ())
  ro = (RobotObservateur**) malloc (sizeof (RobotObservateur*)) ; 
}

void RobotSujet::Attache (RobotObservateur* ro1)
{
  MSG(void RobotSujet::Attache (RobotObservateur*))
  ro = (RobotObservateur**) realloc (ro, (nbO + 1) * sizeof (RobotObservateur*)) ; 
  ro [nbO++] = ro1 ; 
}

void RobotSujet::Detache ()
{
  MSG(void RobotSujet::Detache ())
  delete ro [--nbO] ; 
}

void RobotSujet::Notifie ()
{
  MSG(void RobotSujet::Notifie ())
  for (int i = 0 ; i < nbO ; i++)
    ro [i]->maj () ; 
}
