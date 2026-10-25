#include <iostream>
#include <cmath>

int smallest_factor(int n){
    int max_divider = n;
    for(int i = 2; i<max_divider; i++){
        if ((n % i) == 0){
            return i;
        }
        else{
            max_divider = n / i;
        }
    }
    return 0;
}

int main(){
    int num1, num2, result;
    std::cout<<"Enter the range."<<std::endl;
    std::cin >> num1 >> num2;
    for (int i = num1; i<=num2; i++){
        result = smallest_factor(i);
        if (result == 0){
            std::cout << i << std::endl;
        }
    }

}