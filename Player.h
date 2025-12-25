#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

class Player{
private:
    int balance = 100;
public:
    int bet = 0;
    bool canBet(){
        if((balance - bet) >= 0){
            return true;
        }
        return false;
    }
    void placeBet(){
        if((balance - bet) >= 0){
            balance -= bet;

        }
    }
    void addWin(int amout){
        if(amout >= 0){
            balance += amout;
        }
        
    }

    int getBalance(){
        return balance;
    }

};

#endif 