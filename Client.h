#ifndef CLIENT_H
#define CLIENT_H

#include "Robot.h"
#include <iostream>

class Client
{
  private:
    Robot r ; 
    string n ; 

  public:
    Client () {} ; 
    Client (Robot robot) : r (robot) {}
    void initialiser () ; 
    void ecran  () ; 
    string saisie () ; 
    void nettoyerTrace () ; 
    void traitementCommande () ; 
} ; 

#endif
