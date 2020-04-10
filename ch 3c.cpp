#include <iostream>

using namespace std;

int main()
{
    float ch{}, x{}, y{}, b{};
    int a = 2;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter number: ";
    cin >> ch;

    while (a <= ch) {
        
        y = 1/(a*x) ;
        a = a + 2;
        y = b;
        y = y + b;

    }

    cout << y << endl;

    return 0;
}

