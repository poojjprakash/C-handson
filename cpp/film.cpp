#include <iostream>
int main() {
    int film=135,hour=60;
    int total_time_in_hours=film/hour;
    int total_time_in_minutes=film%hour;
    std::cout<<"Total time "<<total_time_in_hours<<"hours and "<<total_time_in_minutes<<"minutes"<<std::endl;
    return 0;
}