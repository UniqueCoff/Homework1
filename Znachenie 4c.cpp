#include <iostream>
#include <math.h>
int main() {

	int x;
	int y;

	std::cout << "Enter x" << std::endl;
	std::cin >> x;

	if (x > 0) {
		y = 2 * x - 10;
	}
	else
		if (x = 0) {
			y = -2;
		}
		else
			if (x < 0) {
				y = 2 * abs(x + 4);
			}

	std::cout << y;

	return 0;
}



	
	


