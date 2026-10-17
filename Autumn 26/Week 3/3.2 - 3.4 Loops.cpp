#include <iostream>
#include <string>
int main(){
    /* 3.2 Calculating exponentials using for loops
    double base, current_result = 1;
    int power;
    std::cin >> base >> power;
    for (int i = 0; i < power; i++){
        current_result *= base; 
    }
    std::cout << current_result << std::endl;
    */
   // 3.3 Multiplication table
    /*
    int num, i, q;
    std::cin >> num;
    for (i=1; i <= num; i++){
        for (q=1; q<=num; q++){
            std::cout << i*q << "\t";
        }
        std::cout << std::endl;
    }
    */
   /* 3.4 The minimum so far
    double value_input, current_min;
    std::cout << "Please enter number" << std::endl;
    std::cin >> value_input;
    current_min = value_input;

    while (value_input != 0){
        if (value_input < current_min){
            current_min = value_input;
        }
        std::cout << "Minimum so far: " << current_min << std::endl;
        std::cout << "Please enter number" << std::endl;
        std::cin >> value_input;
    }
    std::cout << "Minimum: " << current_min << std::endl;
    */
   /* 3.4 Collatz conjecture
   int num, current_value;
   std::cin >> num, current_value;
   while (current_value != 1){
    std::cout << current_value << "\t";
    if(current_value%2 == 0){
        current_value = current_value / 2;
    }else{
        current_value = current_value*3 + 1;
    }
   }
   std::cout << current_value << std::endl;
    */
   // 3.4 Guess the number
   /* int low, high, midpoint;
   std::string answer = "";
   bool found;
   std::cout << "Enter the lower and higher bounds" << std::endl;
   std::cin >> low >> high;

   midpoint = (high+low)/2;
   std::cout << "Is " << midpoint << " the number?" << std::endl;
   std::cin >> answer;
   while (answer != "yes"){
    if (answer == "lower"){
        high = midpoint - 1;
    }
    else if (answer == "higher"){
        low = midpoint + 1;
    }
    midpoint = (high+low)/2;
    std::cout << "Is " << midpoint <<" the number?" << std::endl;
    std::cin >> answer;    
   }
    */
   //3.4 Prime number
   int value, divider, max_divider;
   divider = 2;
   bool found = false;
   std::cin >> value;
   max_divider = value;
   while (divider < max_divider && !found){
    if ((value % divider) == 0){
        found = true;
    }
    else{
        max_divider = value / divider;
        divider += 1;
    }
   }
   if (found){
    std::cout << value << " is not a prime" << std::endl;
   }
   else{
    std::cout << value << " is a prime" << std::endl;
   }
}