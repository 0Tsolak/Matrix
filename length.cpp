#include "change.hpp"

int length(int number) {

	int len = 0;
	while(number) {
		++len;
		number /= 10;
	}
	return len;
}
