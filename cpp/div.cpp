#include <iostream>
int main(){
    int choc=50,stud=7;
    int choc_for_each_child=choc/stud;
    int choc_left_over=choc%stud;
    std::cout<<"Chocolates for each child:"<<choc_for_each_child<<std::endl;
    std::cout<<"Chocolates left over:"<<choc_left_over<<std::endl;
    return 0;
}