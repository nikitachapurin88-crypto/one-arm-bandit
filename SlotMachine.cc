#include "SlotMachine.h"
#include <cstddef>
#include <iostream>

SlotMachine::SlotMachine(): evaluator(std::shared_ptr<PT> pt){

    std::vector<Symbol> tape = {
        Symbol::Lemon,
        Symbol::Cherry,
        Symbol::Seven,
        Symbol::Cherry,
        Symbol::Wild,
        Symbol::Lemon,
        Symbol::Bonus,
        Symbol::Cherry,
        Symbol::Seven,
        Symbol::Lemon
    };

    reels = {
        Reel(tape), Reel(tape), Reel(tape), Reel(tape), Reel(tape)};

    payl = makePayLines();

}

void SlotMachine::spin(){

    if(player.canBet()){
        player.placeBet();
        
        for(int i = 0 ; i < 5 ; i++){
            reels[i].spin();
        }

        for(size_t col = 0 ; col < 5 ; col++){
            for(size_t row = 0 ; row < 3 ; row++){
                field.set(row, col, reels[col].at(row) );
            }
        }

        double base_win = evaluator.schetall(field, payl);

        if(base_win){
            ++spin_count;
        }
    
        double win = base_win * overdrive.mult(spin_count);

        player.addWin(win);

        field.print();

        std::cout << player.getBalance() << std::endl;
    }
}