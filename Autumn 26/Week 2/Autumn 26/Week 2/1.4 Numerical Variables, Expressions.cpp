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
    
    double width, length, perimeter, area;
    std::cout << "Enter the width"<<std::endl;
    std::cin >> width;
    std::cout << "Enter the length" << std::endl;
    std::cin >> length;
    perimeter = (length+width)*2;
    area = (length*width);
    std::cout << "The perimeter of the rectangle is" << perimeter <<std::endl;
    std::cout << "The area of the rectangle is" << area << std::endl;

}