#include <iostream>

int main() {
	long long x;
	std::cin >> x;
	while (x < 0 or x > 1000000000) {
		std::cout << "Error" << std::endl;
		std::cin >> x;
	}
	long long i;
	std::cin >> i;
	long long maska;
	maska = ~(1 << i);
	std::cout << (maska & x) << std::endl;
}
