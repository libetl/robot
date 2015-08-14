#include "CommandePoser.h"

CommandePoser CommandePoser::cp ; 

void CommandePoser::execute ()
{
  MSG(void CommandePoser::execute ()) 
  robot->poser () ; 
  setO  (0) ; 
}
