#include <iostream>
int main(){
    int c=37;
    float f=(c*9/5)+32;
    float f2=(c*9.0/5)+32;
    std::cout<<"Temperature in Fahrenheit:"<<f<<std::endl;  
    std::cout<<"Temperature in Fahrenheit:"<<f2<<std::endl;
    return 0;
}