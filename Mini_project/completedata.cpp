
#include "completedata.h"

complete::complete():date("0/0/0"),Region("No particular Region"),ExpectedValue(),ActualValue(){}
complete::complete(std::string da,std::string Re,double Th_E,double Nu_E,double Hy_E,double Th_A,double Nu_A,double Hy_A):
           date(da),Region(Re),ExpectedValue(Th_E,Nu_E,Hy_E),ActualValue(Th_A,Nu_A,Hy_A){}

std::string complete::getdate(){
    return date;
}
std::string complete::getregion(){
   return Region;
}
