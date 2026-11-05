#include <iostream>
int main(){
    int egg=275,tray=30;
    int no_of_trays=egg/tray;
    int remaining_eggs=egg%tray;
    std::cout<<"No of trays:"<<no_of_trays<<std::endl;  
    std::cout<<"Remaining eggs:"<<remaining_eggs<<std::endl;
    return 0;
}