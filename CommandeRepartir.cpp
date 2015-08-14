#include "CommandeRepartir.h"

CommandeRepartir CommandeRepartir::cr ; 

void CommandeRepartir::execute ()
{
  MSG(void CommandeRepartir::execute ())
  robot->repartir () ; 
}
