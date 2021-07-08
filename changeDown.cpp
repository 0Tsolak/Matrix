#include "change.hpp"

void changeDown(int a[][col], int binNum) {

	int len = length(binNum);
	int index = 0;
	for(int i = 1; i < row; ++i) {
		for(int j = 0; j < i; ++j) {
			if(index < len) {
				a[i][j] = binNum / pow(10, (len - index - 1));
				binNum -= a[i][j] * pow(10, (len - index - 1));
				++index;
			} else {
				a[i][j] = 0;
			}
		
		}
	
	}
}
