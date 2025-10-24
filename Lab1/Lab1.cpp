#include <iostream>
#include <cfloat>

int main(){
    std::cout << "int/long: size = " << sizeof(int) << ", min = -2**31, max = 2**31-1"  << std::endl;
    std::cout << "short: size = " << sizeof(short) << ", min = -2**15, max = 2**15-1"  << std::endl;
    std::cout << "long long: size = " << sizeof(long long) << ", min = -2**63, max = 2**63-1"  << std::endl;
    std::cout << "char: size = " << sizeof(char) << ", min = -2**7, max = 2**7-1"  << std::endl;
    std::cout << "unsigned int/long: size = " << sizeof(unsigned int) << ", min = 0, max = 2**32-1"  << std::endl;
    std::cout << "unsigned short: size = " << sizeof(unsigned short) << ", min = 0, max = 2**16-1"  << std::endl;
    std::cout << "unsigned long long: size = " << sizeof(unsigned long long) << ", min = 0, max = 2**64-1"  << std::endl;
    std::cout << "unsigned char: size = " << sizeof(unsigned char) << ", min = 0, max = 2**8-1"  << std::endl; 
    std::cout << "bool: size = " << sizeof(bool) << ", min = 0, max = 1"  << std::endl;
    std::cout << "float: size = " << sizeof(float) << ", min = 0, " << FLT_MIN << "max = " << FLT_MAX << std::endl;
    std::cout << "double/long double: size = " << sizeof(double) << ", min = 0, " << DBL_MIN << "max = " << DBL_MAX << std::endl;    
}