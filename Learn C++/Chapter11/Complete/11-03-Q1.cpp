#include <iostream>

int main() {
	constexpr int array[] { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
	for(int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
		std::cout << array[i] << " ";
	}
	return 0;
}
