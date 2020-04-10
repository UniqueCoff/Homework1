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
    cout << "Befor" << endl;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;
    cout << arr[5] << endl;
    cout << arr[6] << endl;
    cout << arr[7] << endl;
    cout << arr[8] << endl;
    cout << arr[9] << endl;

    for (int i = 0; i < size; i++) {

        if (arr[i] % 2 == 0) {

            arr[i] = arr[i] * 2;;

        }

    }

    for (int i = 0; i < size; i++) {

        if (arr[i] % 2 != 0) {

            arr[i] = arr[i] + 3;

        }

    }
    
  


    cout << "After" << endl;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;
    cout << arr[5] << endl;
    cout << arr[6] << endl;
    cout << arr[7] << endl;
    cout << arr[8] << endl;
    cout << arr[9] << endl;

}

