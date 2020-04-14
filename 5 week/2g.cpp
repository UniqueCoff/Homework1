#include <iostream>
#include <ctime>

using namespace std;

int main() {

    srand(time(NULL));

    int const size = 10;
    int c = 0;
    int arr[size];

    for (int i = 0; i < size; i++) {

        arr[i] = rand() % 20 - 10;

    }

    for (int i = 0; i < size; i++) {

        if (arr[i] > 5) {

            c = arr[i] + c;

        }

    }

    cout << c << endl;

}
