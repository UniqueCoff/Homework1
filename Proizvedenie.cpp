#include <iostream>
#include <ctime>

using namespace std;

int main() {

    srand(time(NULL));

    int const size = 10;
    int Pol = 0;
    int Otr = 0;
    int arr[size];

    for (int i = 0; i < size; i++) {

        arr[i] = rand() % 20 - 10;

    }
    /*
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
    */


    for (int i = 0; i < size; i++) {

        if (arr[i] > 0) {

            Pol = arr[i] + Pol;

        }

    }

    for (int i = 0; i < size; i++) {

        if (arr[i] < 0) {

            Otr = arr[i] + Otr;

        }

    }



    cout << "Sum of positive numbers :" << Pol << endl;
    cout << "Sum of negative numbers :" << Otr << endl;

}
