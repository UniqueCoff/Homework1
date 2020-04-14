#include <iostream>
#include <ctime>

using namespace std;

int main() {
    
    srand(time(NULL));

    int max = 0;
    int min = 0;
    int const size = 10;
    int c = 0;
    int arr[size];

    for (int i = 0; i < size; i++) {

        arr[i] = rand() % 20 - 10;

    }

    for (int i = 0; i < size; i++) {

        if (arr[i] > arr[max]) {

            max = i;

        }

    }

    cout << arr[max] << endl;
    cout << "Poradok max " << max << endl;


    for (int i = 0; i < size; i++) {

        if (arr[i] < arr[min]) {

            min = i;

        }

    }

    cout << arr[min] << endl;
    cout << "Poradok min  " << min << endl;
}
