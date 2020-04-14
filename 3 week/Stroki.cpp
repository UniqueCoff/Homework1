#include <iostream>

int main() {

    int a;

    std::cout << "insert the number" << std::endl;
    std::cin >> a;

    for (int i = 1; i <= a; i++) {
        for (int j = 0; j < i; j++)
            std::cout << 0;
        std::cout << std::endl;
    }

    std::cout << std::endl;

}