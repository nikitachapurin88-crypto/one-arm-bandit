#ifndef EVALUATOR_H
#define EVALUATOR_H
#include <memory>        
#include "Paytable.h"    
#include "PayLine.h"     
#include "symbol.h"     
#include "IEvaluator.h"  
class Field;            
class E final : public IE {
public:
    explicit E(std::shared_ptr<IPT> pt);
    win schet(const Field& field, const PayLine& line, int id) const override;
    int schetall(const Field& field, const std::vector<PayLine>& lines) const override;
private:
    std::shared_ptr<IPT> mpt; 
};
#endif