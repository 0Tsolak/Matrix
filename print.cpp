#include "change.hpp"

void print(int a[][col]) {

	for(int i = 0; i < row; ++i) {
	       	for(int j = 0; j < col; ++j)
			std::cout << a[i][j] << "  ";
		std::cout << std::endl;
	}
}
