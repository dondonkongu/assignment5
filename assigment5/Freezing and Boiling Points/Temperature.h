#include <iostream>

#ifndef TEMPERATURE_H
#define TEMPERATURE_H
using namespace std;

class Temperature{
    private:
    double temperature;
    public:
    // Temperature(){};
    Temperature(double temp);
    double getTemp();
    void setTemp(double temp);
    bool isEthylFreezing();
    bool isEthylBoiling();
    bool isOxygenFreezing();
    bool isOxygenBoiling();
    bool isWaterFreezing();
    bool isWaterBoiling();
};
#endif
