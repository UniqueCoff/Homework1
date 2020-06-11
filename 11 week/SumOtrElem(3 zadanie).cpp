#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;
void   main()
{
    fstream f;
    f.open("Z1.txt", ios::out | ios::trunc);

    int const  n = 5;
    int mx[n][n];
    int sum = 0;

    srand(time(NULL));

    int min = 256;
    int str = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mx[i][j] = rand() % 100 - 40;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (mx[i][i] < 0)
        {
            sum += mx[i][i];
        }
    }

    for (int i = 0; i < n; i++) 
    {

        for (int j = 0; j < n; j++)
        {
            cout << mx[i][j] << " ";
            f << mx[i][j] << " ";
        }
        cout << "\n";
    }

    cout << sum;
  
    f.close();


}
