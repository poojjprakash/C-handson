#include <iostream>
int main(){
    int nb=40,bought_price=18,sold_price=25;
    int profit=(sold_price-bought_price)*nb;
    std::cout<<"Profit: "<<profit<<std::endl;
    return 0;
}