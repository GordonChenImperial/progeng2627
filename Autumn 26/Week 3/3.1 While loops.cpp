#include <iostream>

int main (){
    double value_input, current_sum = 0;
    int values_entered = 0;
    std::cout << "Enter a number" << std::endl;
    std::cin >> value_input;
    
    while (value_input != 0){
        values_entered += 1;
        current_sum += value_input;
        std::cout << "Current average is: " << current_sum / values_entered << std::endl;
        std::cout << "Enter a number" << std::endl;
        std::cin >> value_input;
    }
}