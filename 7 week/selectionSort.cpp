#include <iostream>
#include <cmath>
#include <fstream>
#include <ctime>
#include <stdlib.h>

using namespace std;
void selectionSort(float data[], int len);
void s100();
void s1k();
void s10k();
long int counterS = 0;
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

void selectionSort(float data[], int len) {
    int j = 0;
    float tmp = 0;
    for (int i = 0; i < len; i++) {
        j = i;
        for (int k = i; k < len; k++) {
            if (data[j] > data[k]) {
                j = k;
                counterS++;
            }
        }
        tmp = data[i];
        counterS++;
        data[i] = data[j];
        counterS++;
        data[j] = tmp;
        counterS++;
    }
}

void s100()
{
    const int n = 100;
    float data[n];

    for (int i = 0; i < n; i++) {
        data[i] = rand() % 120 - 70;
    }

    selectionSort(data, n);

    cout << "100 elementov" << endl;
    cout << "Selection Sort \t" << counterS << endl;
    cout << " " << endl;

    f << "100 elementov" << endl;
    f << "Selection Sort \t" << counterS << endl;
    f << " " << endl;

    counterS = 0;
}

void s1k()
{
    const int n = 1000;
    float data[n];

    for (int i = 0; i < n; i++) {
        data[i] = rand() % 120 - 70;
    }

    selectionSort(data, n);

    cout << "1000 elementov" << endl;
    cout << "Selection Sort \t" << counterS << endl;
    cout << "" << endl;

    f << "100 elementov" << endl;
    f << "Selection Sort \t" << counterS << endl;
    f << "" << endl;

    counterS = 0;
}

void s10k() {
    const int n = 10000;
    float data[n];

    for (int i = 0; i < n; i++) {
        data[i] = rand() % 120 - 70;
    }

    selectionSort(data, n);

    cout << "10000 elementov" << endl;
    cout << "Selection Sort \t" << counterS << endl;
    cout << "" << endl;

    f << "100 elementov" << endl;
    f << "Selection Sort \t" << counterS << endl;
    f << "" << endl;

    counterS = 0;
}
