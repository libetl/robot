#include "CommandePeserObjet.h"

CommandePeserObjet CommandePeserObjet::cpo ; 

void CommandePeserObjet::execute ()
{
  MSG(void CommandePeserObjet::execute ())
  robot->evaluerObjet () ;  
  cout << "Poids de l'objet : " << getO () << endl ; 
}
