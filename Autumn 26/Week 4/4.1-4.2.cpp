#include <iostream>
#include <cmath>
#include <string>
#include <set>
/**/
double myabs(double in);
int sum_Of_powers(int base, int limit);
double mypow(double base, int exp){
    double result = 1;
    bool negative;
    if (exp < 0){
        exp *= -1;
        negative = true;
    }
    for (int i = 0; i < exp; i++){
        result *= base;
    }
    if (negative){
        result = 1/result;
    }
    return result;
}
int myfactorial(int in){
    int fact = 1, i = 1;
    for (i = 1; i <= in; i++){
        fact *= i;
    }
    return fact;
}
int leap_year(int year){
    bool leap = true;
    if (year % 4 != 0 || year % 100 == 0){
        leap = false;
    }
    if (year % 400 == 0){
        leap = true;
    }
    return leap;
}

int largest_number(int num1, int num2, int num3){
    int largest;
    if (num1 > num2){
        largest = num1;
    }else{
        largest = num2;
    }
    if (num3 > largest){
        largest = num3;
    }
    return largest;
}
void myswap(int& a, int& b){

    int tmp;
    tmp = a;
    a = b;
    b = tmp;

}

void sort_three_numbers(double& n1, double& n2, double& n3){
    double tmp;
    if (n1 > n2){
        tmp = n1;
        n1 = n2;
        n2 = tmp;        
    }
    if (n2 > n3){
        tmp = n2;
        n2 = n3;
        n3 = tmp; 
    }
    if (n1 > n2){
        tmp = n1;
        n1 = n2;
        n2 = tmp;        
    }
}

bool quadsolve(double a, double b, double c, double& x1, double& x2){
    bool realsol;
    double delta= b*b - 4*a*c;
    if (delta<0){
        realsol = false;
    }
    else{
        realsol = true;
        x1 = (-b + std::sqrt(delta))/(2*a);
        x2 = (-b - std::sqrt(delta))/(2*a);
    }
    return realsol;
}

void rectangle(double length, double width, double& area, double& perimeter){
    area = length*width;
    perimeter = (width+length)*2;
}

void int_division(int n1, int n2, int& result, int& remainder){
    result = n1/n2;
    remainder = n1%n2;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    std::set<int> thirty_months = {4, 6, 9, 11};
    d2 = d1;
    m2 = m1;
    y2 = y1;
    if (d1 == 30 && (m1 == 4 ||m1 == 6 || m1 == 9||m1==11)){
        d2 = 1;
        m2 = m1+1;
    }else if (d1 == 31 && (m1 == 1 ||m1 == 3 || m1 == 5||m1==7||m1==8||m1==10)){
        d2 = 1;
        m2 = m1+1;
    }else if(d1 == 31 && m1 == 12){
        d2 = 1;
        m2 = 1;
        y2 = y1+1;
    }else if (d1 == 29 && m1 == 2 || d1 == 28 && !leap_year(y1)){
        d2 = 1;
        m2 = 3;
    }else if (d1 == 28 && leap_year(y1)){
        d2 = 29;
    }else{
        d2 = d1+1;
    }

}

int main(){
    /*
    int integer;
    std::cin >> integer;
    std::cout << "The factorial is "<< myfactorial(integer) << std::endl;
    */
    /*
    std::cout << (leap_year(1956) == 1) << std::endl;
    std::cout << (leap_year(2000) == 1) << std::endl;
    std::cout << (leap_year(2100) == 0) << std::endl;
    */
    /*
    int a,b;
    std::cout << "Please enter the base and the largest power" << std::endl;
    std::cin >> a >> b;
    std::cout << sum_Of_powers(a, b) << std::endl;
    */
    /*
    double n1, n2, n3;

    std::cout << "please enter 3 integers" << std::endl;
    std::cin >> n1 >> n2 >> n3;

    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
    std::cout << "n3: " << n3 << std::endl;
    sort_three_numbers(n1, n2, n3);
    std::cout << "after swapping the values:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
    std::cout << "n3: " << n3 << std::endl;
    */
    /*
    double a, b, c;
    std::cout << "this program finds the real solutions" << std::endl;
    std::cout << "of an equation of the form ax^2 + bx + c = 0" << std::endl;
    std::cout << "please enter the coefficients a, b, c:" << std::endl;
    std::cin >> a >> b >> c;
    double s1, s2;
    if(quadsolve(a, b, c, s1, s2)){
        std::cout << "the solutions are:" << std::endl;
        std::cout << s1 << std::endl;
        std::cout << s2 << std::endl;
    }
    else{
        std::cout << "there are no real solutions" << std::endl;
    }
    */
    /*
    double width, length, r1, r2;
    std::cout << "please enter width followed by the length of the rectangle:" << std::endl;
    std::cin >> width >> length;
    rectangle(length, width, r1, r2);
    std::cout << "The area is: " << r1 << std::endl;
    std::cout << "The perimeter is: " << r2 << std::endl;
    */
    /*
    int n1, n2, r1, r2;
    std::cout << "Enter the divider and divident" << std::endl;
    std::cin >> n1 >> n2;
    int_division(n1, n2, r1, r2);
    std::cout << "The result is: " << r1 << std::endl;
    std::cout << "The remainder is: " << r2 << std::endl;
    */
    int n1, n2, n3, o1, o2, o3;
    std::cout << "Enter the date" << std::endl;
    std::cin >> n1 >> n2 >> n3;
    next_date(n1, n2, n3, o1, o2, o3);
    std::cout << "The next day is: " << o1 << "/" << o2 <<"/"<< o3 << std::endl;
    

}



int sum_Of_powers(int base, int limit){
    int sum;
    sum = 0;  
    for (int i = 1; i <= limit; i++){
        sum += std::pow(base, i);
    }
    return sum;
}

double myabs(double in){
    double abs;
    if (in < 0){
        abs = -in;
    }else{
        abs = in;
    }
    return abs;
}