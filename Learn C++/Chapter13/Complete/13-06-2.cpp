#include <iostream>

class Something {
private:
	const int m_array[5];

public:
	Something() :
			m_array { 1, 2, 3, 4, 5 } {

	}
};

int main() {

	return 0;
}
