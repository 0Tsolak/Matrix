#include "change.hpp"


int main() {

	int a[row][col] = {{1,2,3,4,5}, {5,6,15,8,2}, {9,5,2,1,8}, {3,1,5,6,0}, {4,0,21,5,9}};
	
	std::cout << "Given matix\n\n";
	print(a);

	change(a);

	std::cout << "\nCanged array\n\n";
	print(a);

	return 0;
}
