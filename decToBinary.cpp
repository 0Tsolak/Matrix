#include "change.hpp"


int DecimalToBinary ( int number ) {	
	int BinaryNumber = 0, i = 1;
	
	// Converting to binary
	while ( number > 0 ) {
		int remainder = number % 2;
		BinaryNumber += remainder * i;
		number /= 2;
		i *= 10;
     	}

	return BinaryNumber;
}
