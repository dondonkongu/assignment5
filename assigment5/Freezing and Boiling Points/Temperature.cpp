#include "Temperature.h"


Temperature::Temperature(double temp){
    temperature=temp;
}
double Temperature::getTemp(){
    return temperature;
}
void Temperature::setTemp(double temp){
    temperature=temp;
}
bool Temperature::isEthylFreezing(){
    return temperature<=-173;
}
bool Temperature::isEthylBoiling(){
    return temperature>=172;
}
bool Temperature::isOxygenFreezing(){
    return temperature<= -362;
}
bool Temperature::isOxygenBoiling(){
    return temperature>=-306;
}
bool Temperature::isWaterFreezing(){
    return temperature<= 32;
}
bool Temperature::isWaterBoiling(){
    return temperature>=212;
}
