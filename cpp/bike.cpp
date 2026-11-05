#include <iostream>
int main(){
    int age=17;
    bool lic=true;
    if ((age>=18)&&(lic==true)){
        std::cout<<"You are eligible "<<std::endl;
    }
    else{
        std::cout<<"You are not eligible"<<std::endl;
    }
    return 0;
}