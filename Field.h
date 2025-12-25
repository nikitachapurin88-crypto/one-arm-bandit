#ifndef FIELD_H
#define FIELD_H
#include <cstddef>
#include <iostream>
#include "Symbol.h"

class Field{
private:
    Symbol field[15];
public:
    void set(std::size_t row, std::size_t col, Symbol x){
        size_t idx = col*3+row;
        *(field + idx) = x;
    };
    Symbol get(std::size_t row, std::size_t col){
        size_t idx = col*3+row;
        return *(field + idx);
    };
    void print(){
        for(int i ; i < 15 ; ++i){
            std::cout << char_return(field[i]) << " ";
        }
    };
};


#endif