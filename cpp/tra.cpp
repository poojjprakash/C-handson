#include <iostream>
int main(){
    int pen=25,buying_price=8,selling_price=11;
    int tbp=pen*buying_price;
    int tsp=pen*selling_price;
    int profit=tsp-tbp;
    std::cout<<"Total buying price: "<<tbp<<std::endl;
    std::cout<<"Total selling price: "<<tsp<<std::endl;
    std::cout<<"Profit: "<<profit<<std::endl;
    return 0;
}