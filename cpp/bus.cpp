#include <iostream>
int main(){
    int min=200;
    int hour=min/60;
    int left=min%60;
    std::cout<<"Hours: "<<hour<<" Minutes: "<<left<<std::endl;
    
    return 0;
}