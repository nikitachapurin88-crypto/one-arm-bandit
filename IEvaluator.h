#ifndef IEVALUATOR_H
#define IEVALUATOR_H
#include <vector>        
#include "PayLine.h"     
class Field;             
struct win{
    int id{};
    int match{}; 
    int payout{};        
};
class IE{
public:
    virtual ~IE()=default;
    virtual win schet(const Field& field, const PayLine& line,int id) const = 0;
    virtual int schetall(const Field& field,const std::vector<PayLine>& lines) const = 0;
};
#endif
