#include <iostream>﻿
#include <ctime>

using namespace std;

int main() {


    srand(time(NULL));

    int c;

    cout << "enter range" << endl;
    cin >> c;


    for (int i = 0; i < c; i++) {



        int a = rand() % 20 - 10;

        cout << a << endl;

    }

}