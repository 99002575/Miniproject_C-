
#include "Expected.h"

ExpectedValue::ExpectedValue():Thermal(0.0),Nuclear(0.0),Hydro(0.0){}
ExpectedValue::ExpectedValue(double Th,double Nu,double Hy):Thermal(Th),Nuclear(Nu),Hydro(Hy){}

double ExpectedValue::getThermal(){
   return Thermal;
}

double ExpectedValue::getNuclear(){
  return Nuclear;
}

double ExpectedValue::getHydro(){
   return Hydro;
}
