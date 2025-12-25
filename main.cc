#include "SlotMachine.h"

int main(){
    SlotMachine sm;

    std::cout << "----- LET'S GO GAMBLING -----" << std::endl;

    while(sm.getBalance() > 0){
        sm.spin();
    }

    std::cout << "---------- YOU DIED ---------" << std::endl;

    return 0;
}