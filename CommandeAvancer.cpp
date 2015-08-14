#include "CommandeAvancer.h"
#include "Attendre.h"
#include <sstream>

CommandeAvancer CommandeAvancer::ca ; 

void CommandeAvancer::execute ()
{
  MSG(void CommandeAvancer::execute ())
  robot->avancer () ; 
  int x, y ; 
  attendreStruct* as = (attendreStruct*) malloc (sizeof (attendreStruct)) ; 
  pthread_t thread1 ; 
  if (vect->size () == 2)
  {
    string tmpy = vect->back () ; 
    istringstream sy (tmpy) ;
    vect->pop_back () ;
    istringstream sx (vect->back ()) ;
    vect->push_back (tmpy) ;
    sy >> y ;     
    sx >> x ;     
    setX (x) ; 
    setY (y) ; 
  }
  else if (getD () == 'e')
    setX (getX () + 1) ; 
  else if (getD () == 's')    
    setY (getY () + 1) ; 
  else if (getD () == 'o')    
    setX (getX () - 1) ; 
  else if (getD () == 'n')    
    setY (getY () - 1) ; 
  as->robot = robot ; 
  as->etat  = etat  ; 
  pthread_create (&thread1, NULL, attendre, as) ; 
}
