#include<iostream>
int main(){
    int stud=85,team=6;
    int full_team=stud/team;
    int left=stud%team;
    std::cout<<"Total full teams:"<<full_team<<std::endl;
    std::cout<<"Students left without team:"<<left<<std::endl;
    return 0;
}