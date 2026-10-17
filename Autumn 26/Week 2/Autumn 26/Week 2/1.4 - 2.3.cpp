#include <iostream>

int main(){
    //double a, b, c;
    // double = integers, n1/n2/sum = variable names
    /*
    std::cout << "please enter the first number" << std::endl;
    std::cin >> n1;

    std::cout << "please enter the second number" << std::endl;
    std::cin >> n2;

    product = n1*n2;
    std::cout << n1 << "x" << n2 << "=" << product << std::endl;
    
    a = 1;
    b = 2;
    c = a+b;
    std::cout << c << std::endl; // c = 3
    a = 2;

    std::cout << c << std::endl; //c = 3
    c = a+b;
    */
    
    /* 
    double width, length, perimeter, area;
    std::cout << "Enter the width"<<std::endl;
    std::cin >> width;
    std::cout << "Enter the length" << std::endl;
    std::cin >> length;
    perimeter = (length+width)*2;
    area = (length*width);
    std::cout << "The perimeter of the rectangle is" << perimeter <<std::endl;
    std::cout << "The area of the rectangle is" << area << std::endl;
    */

    /*
    int year;
    std::cout << "Enter a year" << std::endl;
    std::cin >> year;
    if ((year%4)!=0 || year%100 == 0) {
        std:: cout << "Not a leap year" << std::endl;
    }
    else{
        std:: cout << "Leap year" << std::endl;
    }
    */
   /* 
   double length_in, length_out;
   bool valid_unit;
   std::cout << valid_unit;
   valid_unit = true;
   std::string unit_in, unit_out;

   const double mile_to_km = 1.609;

   std::cin >> length_in >> unit_in;

   if (unit_in == "km"){
    unit_out = "mile";
    length_out = length_in/mile_to_km;
   }
   else if (unit_in == "mile" || unit_in =="miles"){
    unit_out = "km";
    length_out = length_in * mile_to_km;
    std::cout << length_out << " " << unit_out << std::endl;

   }
   else {
    valid_unit = false;
   }

   if (valid_unit){
    std::cout << length_out << " " << unit_out << std::endl;
   }
   else{
    std::cout << "Invalid unit" << std::endl;
   }
    */
   /*
   double value_input, value_output;
   char unit_input, unit_output;
   bool valid_unit;
   std::cout << "Enter the temperature and the unit" << std::endl;
   std::cin >> value_input >> unit_input;
   if (unit_input == 'C' || unit_input == 'c'){
    valid_unit = true;
    value_output = (value_input * 1.8) + 32;
    unit_output = 'F';
   }
   else if (unit_input == 'F' || unit_input == 'f'){
    valid_unit = true;
    value_output = (value_input - 32)/1.8;
    unit_output = 'C';
   }
   
   if (valid_unit){
    std::cout << value_output << unit_output << std::endl;
   }
   else{
    std::cout << "Invalid unit" << std::endl;
   }
    */
   
    double n = 2;
    n = 4;
    if(n < 3){
        std::cout << "x" << std::endl;
    }
    else if(n < 4){
        std::cout << "y" << std::endl;
        n = 10;
    }
    else if(n == 10){
        std::cout << "z" << std::endl;
    }
}