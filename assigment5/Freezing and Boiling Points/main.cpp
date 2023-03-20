#include "Temperature.h"


main(){
    double temp;
    cout<<" nhap nhiet do vao: ";
    cin>>temp;
    Temperature t(temp);
    cout<<"O "<<t.getTemp()<<" do C, cac chat sau se dong bang hoac soi"<<endl;
    if(t.isEthylFreezing()){
        cout<<"ruou se duoc dong bang"<<endl;
    }
    if(t.isEthylBoiling()){
        cout<<"ruou se duoc soi "<<endl;
    }
    if(t.isOxygenFreezing()){
        cout<<"Oxygen se duoc dong bang"<<endl;
    }
    if(t.isOxygenBoiling()){
        cout<<"oxygen se duoc soi "<<endl;
    }
    if(t.isWaterFreezing()){
        cout<<"nuoc se duoc dong bang"<<endl;
    }
     if(t.isWaterBoiling()){
        cout<<"nuoc se duoc soi "<<endl;
    }
    return 0;
}