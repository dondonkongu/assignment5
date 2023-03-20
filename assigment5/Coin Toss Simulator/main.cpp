#include "Coin.h"
main(){
    Coin c1;
    cout<<"mat cua dong xu dang la"<<c1.getSideUP()<<endl;
    int countHead=0;
    int countTail=0;
    for(int i=0;i<20;i++){
        c1.toss();
        cout<<"sau khi tung "<<i<<" lan"<<" mat cua dong xu la "<<c1.getSideUP()<<endl;
        if(c1.getSideUP()== "heads")
            countHead++;
        else
            countTail++;    
    }
    cout<<"so lan tung ra mat sap la "<<countHead<<endl;
    cout<<"so lan tung ra mat ngua la "<<countTail<<endl;
    return 0;
}