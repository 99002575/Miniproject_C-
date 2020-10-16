#include "gtest/gtest.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "comparision.h"
#include "Actual.h"
#include "Expected.h"


namespace

{

class comparisionTest : public ::testing::Test {

protected:
  void SetUp()
  {

std::fstream fin;
fin.open("pfile.csv");
std::vector<std::string> row;

std::string line, word;

 while(!fin.eof())
{
    row.clear();
    getline(fin,line);

    std::stringstream s(line);

    while(getline(s,word,','))
    {
        row.push_back(word);
    }
    std::string date,Region;
    double Thermal,Nuclear,Hydro,Thermal_A,Nuclear_A,Hydro_A;
    std::vector< int> num;

   for(int i=0; i<8 ;i++)
   {
       int n = atoi(row[i].c_str());
       num.push_back(n);

   }
   date = num[0];
   Region = num[1];
   Thermal = num[2];
   Nuclear = num[3];
   Hydro = num[4];
   Thermal_A = num[5];
   Nuclear_A = num[6];
   Hydro_A = num[7];

   dummy.add_complete(date,Region,Thermal,Nuclear,Hydro,Thermal_A,Nuclear_A,Hydro_A);
   //dummy.ActualValue(Thermal_A,Nuclear_A,Hydro_A);
   }

  }
  void TearDown() {}

  comparision dummy;
  //ActualValue AV;

};

TEST_F(comparisionTest,MaxThermal)
{
    EXPECT_EQ(113,dummy.MaxThermal());
}

TEST_F(comparisionTest,MaxNuclear)
{
    EXPECT_EQ(664,dummy.MaxNuclear());
}
TEST_F(comparisionTest,MaxHydro)
{
    EXPECT_EQ(76,dummy.MaxHydro());
}

TEST_F(comparisionTest,MinThermal)
{
    EXPECT_EQ(8,dummy.MinThermal());
}
TEST_F(comparisionTest,MinNuclear)
{
    EXPECT_EQ(18,dummy.MinNuclear());
}
TEST_F(comparisionTest,MinHydro)
{
    EXPECT_EQ(0,dummy.MinHydro());
}

TEST_F(comparisionTest,MaxThermal_E)
{
    EXPECT_EQ(640,dummy.MaxThermal_E());
}

TEST_F(comparisionTest,MaxNuclear_E)
{
    EXPECT_EQ(127,dummy.MaxNuclear_E());
}

TEST_F(comparisionTest,MaxHydro_E)
{
    EXPECT_EQ(96,dummy.MaxHydro_E());
}
TEST_F(comparisionTest,MinThermal_E)
{
    EXPECT_EQ(0,dummy.MinThermal_E());
}
TEST_F(comparisionTest,MinNuclear_E)
{
    EXPECT_EQ(0,dummy.MinNuclear_E());
}
TEST_F(comparisionTest,MinHydro_E)
{
    EXPECT_EQ(11,dummy.MinHydro_E());
}
TEST_F(comparisionTest,avgPower)
{
    EXPECT_EQ(287,dummy.avgpower_E());
}
TEST_F(comparisionTest,avgPowerA)
{
    EXPECT_EQ(284,dummy.avgpower_A());
}

}
