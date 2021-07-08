#include "change.hpp"

void changeUp(int a[][col], int binNum) {

	int len = length(binNum);
	int index = 0;
	for(int i = 0; i < row - 1; ++i) {
		for(int j = i + 1; j < col; ++j) {
			if(index < len) {
				a[i][j] = (binNum / pow(10, (len - index - 1)));
				binNum -= (a[i][j] * pow(10, (len - index - 1)));
				++index;
			} else {
				a[i][j] = 0;
			}
		
		}
	
	}
}
