#include "change.hpp"

int sumDown(int a[][col]) {

	int sum = 0;
	for(int i = 1; i < row; ++i) {
		for(int j = 0; j < i; ++j)
			sum += a[i][j];
	}
	return sum;
}
