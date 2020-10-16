#ifndef COMPLETEDATA_H_INCLUDED
#define COMPLETEDATA_H_INCLUDED

#include "Expected.h"
#include "Actual.h"

class complete:public ExpectedValue,public ActualValue
{
  std::string date;
  std::string Region;
public:
    complete();
    complete(std::string,std::string,double,double,double,double,double,double);
    std::string getdate();
    std::string getregion();

};
#endif
