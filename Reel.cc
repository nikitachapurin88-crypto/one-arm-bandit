#include "Reel.h"
#include "Symbol.h"
#include <random>
#include <cstddef>
#include <time.h>

Reel::Reel(std::vector<Symbol> tape)
    : tape_(std::move(tape)){}

void Reel::spin(){
    srand(time(NULL));
    offset = rand() % tape_.size() + 1;
}

Symbol Reel::at(std::size_t row) const{
    Symbol element = tape_[(offset + row)%tape_.size()];
    return element;
}