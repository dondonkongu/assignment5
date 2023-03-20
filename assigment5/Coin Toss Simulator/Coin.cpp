#include "Coin.h"
#include <cstdlib>
#include <ctime>
Coin::Coin(){
    srand(time(NULL));
    if(rand()%2==0)
        sideUp="heads";
    else
        sideUp="tails";    
}
void Coin::toss(){
    if(rand()%2==0)
        sideUp="heads";
    else
        sideUp="tails";  
}
string Coin::getSideUP(){
    return sideUp;
}