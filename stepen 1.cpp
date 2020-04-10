#include <iostream>

int main() {

	float x, y, ch, u;
	int i;

	std::cout << "Enter x: ";
	std::cin >> x;
	std::cout << "Enter ch: ";
	std::cin >> ch;

	y = 0;

	double sum = 0;

	for (int i = 1; i <= ch; i++) {

		if (i % 2 == 0) {

			y = 1 / (i * x);
			sum = sum + y;
		}
	}

	std::cout << sum ;

	std::cout << std::endl;

	return 0;



}