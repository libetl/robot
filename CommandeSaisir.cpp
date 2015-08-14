#include "CommandeSaisir.h"

CommandeSaisir CommandeSaisir::cs ; 

void CommandeSaisir::execute ()
{
  MSG(void CommandeSaisir::execute ())
  robot->saisir () ; 
  srand (time (NULL))  ; 
  setO  (rand () % 19 + 1) ; 
}
