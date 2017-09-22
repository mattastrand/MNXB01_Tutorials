// Program that determines the actual size of the various data types on my system.

#include <iostream>

int main() {
	std::cout << "Size of char " << sizeof(char) << std::endl;
	std::cout << "Size of int " << sizeof(int) << std::endl;
	std::cout << "Size of unsigned int " << sizeof(unsigned int) << std::endl;
	std::cout << "Size of short int " << sizeof(short int) << std::endl;
	std::cout << "Size of long int " << sizeof(long int) << std::endl;
	std::cout << "Size of float " << sizeof(float) << std::endl;
	std::cout << "Size of double " << sizeof(double) << std::endl;
	std::cout << "Size of long double " << sizeof(long double) << std::endl;
}
