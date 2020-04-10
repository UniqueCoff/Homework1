#include <iostream>
#include <ctime>

using namespace std;

int main() {

    srand(time(NULL));

    int const size = 10;
    int a;
    int c = 0;
    int arr[size];

    cout << "enter the number in the limit [-10;10]" << endl;
    cin >> a;

    for (int i = 0; i < size; i++) {

        arr[i] = rand() % 20 - 10;

    }

    for (int i = 0; i < size; i++) {

        if (arr[i] > a) {

            c = arr[i] + c;

        }

    }

    cout << c << endl;

}

