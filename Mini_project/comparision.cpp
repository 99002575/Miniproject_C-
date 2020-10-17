
#include "comparision.h"
#include "Actual.h"
#include "Expected.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

void comparision::add_complete(std::string da,std::string Re,double Th_E,double Nu_E,double Hy_E,double Th_A,double Nu_A,double Hy_A){
       data.push_back( complete(da,Re,Th_E,Nu_E,Hy_E,Th_A,Nu_A,Hy_A) );
}

double comparision::MaxThermal(){

     std::list<complete> :: iterator iter = data.begin();

    double Max = iter-> getThermal_A();
        iter=iter+1;

    for(;iter!=data.end();++iter)
     {
        if(Max < iter-> getThermal_A())
        {
            Max = iter-> getThermal_A();
        }
     }

     return Max;
}

double comparision::MaxNuclear(){

     std::list<complete> :: iterator iter = data.begin();

    double Max = iter-> getNuclear_A();
        iter=iter+1;

    for(;iter!=data.end();++iter)
     {
        if(Max < iter-> getNuclear_A())
        {
            Max = iter-> getNuclear_A();
        }
     }

     return Max;
}

double comparision::MaxHydro(){

     std::list<complete> :: iterator iter = data.begin();

    double Max = iter-> getHydro_A();
        iter=iter+1;

    for(;iter!=data.end();++iter)
     {
        if(Max < iter-> getHydro_A())
        {
            Max = iter-> getHydro_A();
        }
     }

     return Max;
}

double comparision::MinThermal(){

     std::list<complete> :: iterator it = data.begin();

    double Min = it-> getThermal_A();
        it=it+1;

    for(;it!=data.end();++it)
     {
        if(Min > it-> getThermal_A())
        {
            Min = it-> getThermal_A();
        }
     }

     return Min;
}

double comparision::MinNuclear(){

     std::list<complete> :: iterator iter = data.begin();

    double Min = iter-> getNuclear_A();
       iter=iter+1;

    for(;iter!=data.end();++iter)
     {
        if(Min > iter-> getNuclear_A())
        {
            Min = iter-> getNuclear_A();
        }
     }

     return Min;
}

double comparision::MinHydro(){

     std::list<complete> :: iterator iter = data.begin();

    double Min = iter-> getHydro_A();
       iter=iter+1;

    for(;iter!=data.end();++iter)
     {
        if(Min > iter-> getHydro_A())
        {
            Min = iter-> getHydro_A();
        }
     }

     return Min;
}

double comparision::MaxThermal_E(){

     std::list<complete> :: iterator iter = data.begin();

    double Max = iter-> getThermal();
        iter=iter+1;

    for(;iter!=data.end();++iter)
     {
        if(Max < iter-> getThermal())
        {
            Max = iter-> getThermal();
        }
     }

     return Max;
}

double comparision::MaxNuclear_E(){

     std::list<complete> :: iterator iter = data.begin();

    double Max = iter-> getNuclear();
        iter=iter+1;

    for(;iter!=data.end();++iter)
     {
        if(Max < iter-> getNuclear())
        {
            Max = iter-> getNuclear();
        }
     }

     return Max;
}

double comparision::MaxHydro_E(){

     std::list<complete> :: iterator iter = data.begin();

    double Max = iter-> getHydro();
        iter=iter+1;

    for(;iter!=data.end();++iter)
     {
        if(Max < iter-> getHydro())
        {
            Max = iter-> getHydro();
        }
     }

     return Max;
}

double comparision::MinThermal_E(){

     std::list<complete> :: iterator it = data.begin();

    double Min = it-> getThermal();
        it=it+1;

    for(;it!=data.end();++it)
     {
        if(Min > it-> getThermal())
        {
            Min = it-> getThermal();
        }
     }

     return Min;
}

double comparision::MinNuclear_E(){

     std::list<complete> :: iterator it = data.begin();

    double Min = it-> getNuclear();
        it=it+1;

    for(;it!=data.end();++it)
     {
        if(Min > it-> getNuclear())
        {
            Min = it-> getNuclear();
        }
     }

     return Min;
}

double comparision::MinHydro_E(){

     std::list<complete> :: iterator it = data.begin();

    double Min = it-> getHydro();
        it+=1;

    for(;it!=data.end();++it)
     {
        if(Min > it-> getHydro())
        {
            Min = it-> getHydro();
        }
     }

     return Min;
}

int comparision::avgpower_E(){
   double Th = MaxThermal_E();
   double Nu = MaxNuclear_E();
   double Hy = MaxHydro_E();
   int avg;
   if(Th>0&&Nu>0&&Hy>0){
      avg = ((Th+Nu+Hy)/3);
   }
   else{
      avg=0;
   }
   return avg;
}

int comparision::avgpower_A(){
   double Th = MaxThermal();
   double Nu = MaxNuclear();
   double Hy = MaxHydro();
   int avg;
   if(Th>0&&Nu>0&&Hy>0){
      avg = ((Th+Nu+Hy)/3);
   }
   else{
       avg=0;
   }
   return avg;
}
