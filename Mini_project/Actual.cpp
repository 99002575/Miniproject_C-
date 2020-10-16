#include "Actual.h"

ActualValue::ActualValue():Thermal_A(0.0),Nuclear_A(0.0),Hydro_A(0.0){}
ActualValue::ActualValue(double Th,double Nu,double Hy):Thermal_A(Th),Nuclear_A(Nu),Hydro_A(Hy){}

double ActualValue::getThermal_A(){
   return Thermal_A;
}

double ActualValue::getNuclear_A(){
  return Nuclear_A;
}
double ActualValue::getHydro_A(){
  return Hydro_A;
}
