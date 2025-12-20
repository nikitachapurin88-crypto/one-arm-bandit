#ifndef OVERDRIVE_H      
#define OVERDRIVE_H                         
#include "IOverdrive.h"        
class od final: public IOD { 
public:
    od()=default;    
    double mult(int spins) const override; 
};
#endif