#include <iostream>

int main(){
    int a;
    std::cin >> a;
    int minimum = a;
    int maximum = a;
    while (a != 0) {
        std::cin >> a;
        if (a == 0){
            break;
        }
        if (a > maximum){
            maximum = a;
        }
        if (a < minimum){
            minimum = a;
        }
    
    }
    if (maximum == 0 and minimum == 0){
        std::cout << "All numbers are zero" << std::endl;
    }
    else if (maximum == minimum){
        std::cout << "All numbers are equal" << std::endl;
    }
    else {
        std::cout << "Minimum = " << minimum << " " << "Maximum = " << maximum << std::endl;
    }
}