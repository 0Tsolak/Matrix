#include "change.hpp"

int sumUp(int a[][col]) {

	int sum = 0;
	for(int i = 0; i < row - 1; ++i) {
		for(int j = i + 1; j < col; ++j)
			sum += a[i][j];
	}
	return sum;
}
