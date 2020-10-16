#ifndef COMPARISION_H_INCLUDED
#define COMPARISION_H_INCLUDED

#include "completedata.h"
#include <list>
#include <iterator>

class comparision{
     std::list <complete> data;
public:
     void add_complete(std::string da,std::string Re,double Th_E,double Nu_E,double Hy_E,double Th_A,double Nu_A,double Hy_A);
     double MaxThermal();
     double MinThermal();
     double MaxNuclear();
     double MinNuclear();
     double MaxHydro();
     double MinHydro();
     double MaxThermal_E();
     double MinThermal_E();
     double MaxNuclear_E();
     double MinNuclear_E();
     double MaxHydro_E();
     double MinHydro_E();
     int avgpower_E();
     int avgpower_A();
     //double getAvgPower_date(std::string,std::string);

};

#endif
