#include "CommandeAppeler.h"

CommandeAppeler CommandeAppeler::cap ;

void CommandeAppeler::execute ()
{
  MSG(void CommandeAppeler::execute ())
  string nom ; 
  nom = vect->back () ; 
  MacroCommande* mc = (*macroCommandes) [nom] ; 
  if (mc != NULL) mc->execute () ; 
}
