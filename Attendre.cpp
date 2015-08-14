#include "Attendre.h"

void sleep (unsigned msec) 
{
    struct timespec req, rem ;
    req.tv_sec = msec / 1000 ;
    req.tv_nsec = (msec % 1000) * 1000000 ;
    while ((req.tv_sec != 0) || (req.tv_nsec != 0)) {
        if (nanosleep (&req, &rem) == 0)
            break ;
        break ;
    }
}

void* attendre (void* as)
{
  cout << "\033[24;0H+++ Deplacement en cours (en parallèle de l'execution)" << endl ; 
  cout << "\033[5;0H\033[1;36;44m" << endl ; 
  sleep (10000);
  cout << "\033[24;0H--- Deplacement termine                               " << endl ; 
  cout << "\033[18;0H\033[1;36;43m" ; 
  (*(attendreStruct*)as).robot->setEtat ((*(attendreStruct*)as).etat) ; 
  (*(attendreStruct*)as).robot->Notifie () ; 
  cout << "\033[5;0H\033[1;36;44m" << endl ; 
  return NULL ; 
}
