#include "Client.h"

int main ()
{
  Client c ; 

  c.initialiser () ; 
  
  while (1)
  {
    c.ecran  () ; 

    c.saisie () ; 

    c.nettoyerTrace () ;

    c.traitementCommande () ; 
  }

  return 0 ; 
}
