#include <iostream>
int main(){
float r;
std::cin >> r;
if (r < 0 and r >= 100){
    std::cout << "Eror";
    std::cin >> r;
}
std::cout << r*r*3.141592653;
}