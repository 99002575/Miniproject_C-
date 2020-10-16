
#ifndef ACTUAL_H_INCLUDED
#define ACTUAL_H_INCLUDED

#include <iostream>

class ActualValue{
  double Thermal_A;
  double Nuclear_A;
  double Hydro_A;

public:
    ActualValue();
    ActualValue(double,double,double);
    double getThermal_A();
    double getNuclear_A();
    double getHydro_A();
};

#endif
