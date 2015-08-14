#include "CommandeTourner.h"
#include "Attendre.h"

CommandeTourner CommandeTourner::ct ;

void CommandeTourner::execute ()
{
  MSG(void CommandeTourner::execute ())
  robot->tourner () ; 
  attendreStruct* as = (attendreStruct*) malloc (sizeof (attendreStruct)) ; 
  pthread_t thread1 ; 
  if (vect->size () == 1)
  {
    string s = vect->back () ; 
    if (s == "E" || s == "S" || s == "O" || s == "N")
      setD (tolower (s [0])) ;
  }
  else if (getD () == 'e')
    setD ('s') ; 
  else if (getD () == 's')    
    setD ('o') ; 
  else if (getD () == 'o')    
    setD ('n') ; 
  else if (getD () == 'n')    
    setD ('e') ; 
  as->robot = robot ; 
  as->etat  = etat  ; 
  pthread_create (&thread1, NULL, attendre, as) ;  
}
