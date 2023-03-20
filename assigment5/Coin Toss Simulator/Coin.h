#include <iostream>
#ifndef COIN_H
#define COIN_H
using namespace std;

class Coin{
    private:
    string sideUp;
    public:
    Coin();
    void toss();
    string getSideUP();    
};
#endif