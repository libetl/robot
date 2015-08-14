#include "CommandeEvaluerObstacle.h"

CommandeEvaluerObstacle CommandeEvaluerObstacle::ceo ; 

void CommandeEvaluerObstacle::execute ()
{
  MSG(void CommandeEvaluerObstacle::execute ())
  etat->evaluerObstacle () ; 
  cout << "Taille de l'obstacle : " << getH () << endl ; 
  srand (time (NULL)) ; 
  setH (rand () % 20) ; 
}
