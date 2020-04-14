#include <iostream>
#include <iomanip>  

int main()
{
    int a, b;

    std::cout << "Enter Interval" << std::endl;
    std::cin >> a;
    std::cin >> b;

    float X;

    std::cout << "Solve function. \nEnter X: ";
    std::cin >> X;

 
    std::cout << "\tx\t\ty" << std::endl;

    float x = a;

    std::cout.precision(5);

    while (x < b) {
        float f = sqrt(2+3*x)+ 72*x+tan(4*x+31);
        std::cout << "\t"
            << x
            << "\t\t"
            << f
            << std::endl;
        x += X;
    }

    return 0;
}
