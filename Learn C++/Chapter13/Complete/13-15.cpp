#include <iostream>

class Accumulator {
private:
	int m_value { 0 };
public:
	void add(int value) {
		m_value += value;
	}
	friend void reset(Accumulator &accumulator);
};

void reset(Accumulator &accumulator) {
	accumulator.m_value = 0;
}

int main() {
	Accumulator acc;
	acc.add(5);
	reset(acc);

	return 0;
}
