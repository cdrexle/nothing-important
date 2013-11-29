#ifndef WATCARD_H
#define WATCARD_H

#include <uFuture.h>

class WATCard {
  //TODO: What does this constructor do?
    WATCard( const WATCard & );            // prevent copying
    WATCard &operator=( const WATCard & );
  public:
    WATCard();
    typedef Future_ISM<WATCard *> FWATCard; // future watcard pointer
    void deposit( unsigned int amount );
    void withdraw( unsigned int amount );
    unsigned int getBalance();
  private:
  	unsigned int balance;
};

#endif
