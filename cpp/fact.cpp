#include<iostream>
int main(){
    int pen=500,pack=12;
    int total=pen/pack;
    int left=pen%pack;
    std::cout<<"Total pens in each packet:"<<total<<std::endl;
    std::cout<<"Pens left without packet:"<<left<<std::endl;
    return 0;
}