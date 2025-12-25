#ifndef PAYTABLE_H
#define PAYTABLE_H
#include <array>        
#include <memory>      
#include <unordered_map>
#include "symbol.h"    
class PT{
public:
    ststic constexpr mc=5;
    PT()=default;
    ~PT()=default;
    void zachto(Symbol s, int count, int payout) override;
    int skoka(Symbol s, int count) const override;
    bool has(Symbol s, int count) const;
private:
    std::unordered_map<Symbol, std::array<int,mc+1>> table;
};
std::shared_ptr<PT> makeDPT();
#endif