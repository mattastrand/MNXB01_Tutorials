// Check what happens when variable values are outside of variable range.

#include <iostream>

int main() {
	short int small,overflow;
	small = 65535;
	overflow = small * small;
	std::cout << overflow;
}
	
