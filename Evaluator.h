#ifndef EVALUATOR_H
#define EVALUATOR_H
#include <memory>        
#include "Paytable.h"    
#include "PayLine.h"     
#include "symbol.h"     
class Field; 
struct win{
    int id{};
    int match{}; 
    int payout{};        
};          
class E{
public:
    explicit E(std::shared_ptr<IPT> pt);
    ~E()=default;
    win schet(const Field& field, const PayLine& line, int id) const;
    int schetall(const Field& field, const std::vector<PayLine>& lines) const;
private:
    std::shared_ptr<IPT> mpt; 
};
#endif