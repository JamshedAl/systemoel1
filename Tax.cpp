#ifndef TAX
#define TAX
#include "Tax.h" 
double Calculate(double amount){
    if(amount<1000){
        return amount*0.05;
    }
    else if(amount<10000){
        return amount*0.08;
    }
    else if(amount<100000){
        return amount*0.12;
    }
    else{
        return amount*0.15;
    }
    
}
#endif