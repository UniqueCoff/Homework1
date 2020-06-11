#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

int main()
{   
    int const  a = 2;
    int const  b = 5;
    int mx[a][b], max = -1;

    fstream f;
    f.open("Z7.txt", ios::out | ios::trunc);

    srand(time(NULL));

    for (int i = 0; i < b; i++)
    {
        mx[0][i] = rand() % 1000 + 250;
    }
    
    for (int i = 0; i < b; i++)
    {
        mx[1][i] = rand() % 10;
    }
   
    for (int i = b; i >= 0; i--)
    {
      
        if (mx[0][i] > max)
        max = mx[0][i];
       
    }
   
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << mx[i][j]<<"\t";
            f<< mx[i][j] << " ";
        }
        cout << "\n";
        f << "\n";
    }
    
    cout << "\n";

    cout << max;      
    return 0;
}