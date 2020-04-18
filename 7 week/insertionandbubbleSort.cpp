#include <iostream>
#include <cmath>
#include <fstream>
#include <ctime>
#include <stdlib.h>

using namespace std;
void insertionSort(float data[], int len);
void bubbleSort(float data[], int len);
void s100();
void s1k();
void s10k();
long int counterB = 0;
long int counterI = 0;
fstream f;

int main() {

    f.open("Zadanie_2_Oll.txt", ios::out | ios::trunc);
    cout << "Start of the sorting!" << endl << endl;
    srand(86489769808745);
    s100();
    s1k();
    s10k();
    f.close();
}

void insertionSort(float data[], int len) {
    float key = 0;
    int j = 0;
    for (int i = 1; i < len; i++) {
        key = data[i];
        j = i - 1;
        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            counterI++;
            j = j - 1;
            counterI++;
            data[j + 1] = key;
            counterI++;
        }
    }
}

void bubbleSort(float data[], int len) {
    float tmp = 0;
    for (int i = 0; i < len; i++) {
        for (int j = len - 1; j >= i + 1; j--) {
            if (data[j] < data[j - 1]) {
                tmp = data[j];
                counterB++;
                data[j] = data[j - 1];
                counterB++;
                data[j - 1] = tmp;
                counterB++;
            }
        }
    }
}

void s100()
{
    const int n = 100;
    float data[n];

    for (int i = 0; i < n; i++) {
        data[i] = rand() % 120 - 70;

    }

    insertionSort(data, n);

    for (int i = 0; i < n; i++) {
        data[i] = rand() % 120 - 70;

    }
    bubbleSort(data, n);

    cout << "100 elementov" << endl;
    cout << "Bubble Sort \t" << counterB << endl;
    cout << "Insertion Sort \t" << counterI << endl;
    cout << "" << endl;

    f << "100 elementov" << endl;
    f << "Bubble Sort \t" << counterB << endl;
    f << "Insertion Sort \t" << counterI << endl;
    f << "" << endl;

    counterB = 0;
    counterI = 0;

}

void s1k()
{
    const int n = 1000;
    float data[n];

    for (int i = 0; i < n; i++) {
        data[i] = rand() % 120 - 70;

    }

    insertionSort(data, n);

    for (int i = 0; i < n; i++) {
        data[i] = rand() % 120 - 70;

    }
    bubbleSort(data, n);

    cout << "1000 elementov" << endl;
    cout << "Bubble Sort \t" << counterB << endl;
    cout << "Insertion Sort \t" << counterI << endl;
    cout << "" << endl;

    f << "100 elementov" << endl;
    f << "Bubble Sort \t" << counterB << endl;
    f << "Insertion Sort \t" << counterI << endl;
    f << "" << endl;

    counterB = 0;
    counterI = 0;
}

void s10k() {
    const int n = 10000;
    float data[n];

    for (int i = 0; i < n; i++) {
        data[i] = rand() % 120 - 70;

    }

    insertionSort(data, n);

    for (int i = 0; i < n; i++) {
        data[i] = rand() % 120 - 70;

    }
    bubbleSort(data, n);

    cout << "10000 elementov" << endl;
    cout << "Bubble Sort \t" << counterB << endl;
    cout << "Insertion Sort \t" << counterI << endl;
    cout << "" << endl;

    f << "100 elementov" << endl;
    f << "Bubble Sort \t" << counterB << endl;
    f << "Insertion Sort \t" << counterI << endl;
    f << "" << endl;

    counterB = 0;
    counterI = 0;
}
