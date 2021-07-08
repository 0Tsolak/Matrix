#include "change.hpp"


void change(int a[][col]) {

	int up = sumUp(a);
	int down = sumDown(a);

	int upSumInBinary = DecimalToBinary(up);
	int downSumInBinary = DecimalToBinary(down);

	changeUp(a, upSumInBinary);
	changeDown(a, downSumInBinary);
}
