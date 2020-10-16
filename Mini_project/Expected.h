
#ifndef EXPECTED_H_INCLUDED
#define EXPECTED_H_INCLUDED

#include <iostream>


class ExpectedValue{
  double Thermal;
  double Nuclear;
  double Hydro;

public:
     ExpectedValue();
     ExpectedValue(double,double,double);
     double getThermal();
     double getNuclear();
     double getHydro();
};
#endif
