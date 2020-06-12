#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <string>
using namespace std;

void   SummMatrix()
{
    const int a = 5;
    const int b = 5;
    const int с = 5;
    const int d = 5;
    const int e = 5;
    const int f = 5;
    int mat1[a][b]{};
    int mat2[с][d]{};
    int summ[e][f]{};

    srand(time(NULL));

    cout << "Fitst matrix:" << endl;

    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            mat1[i][j] = rand() % 15;

    for (int i = 0; i < a; i++)    
    {
        for (int j = 0; j < b; j++)
            cout << mat1[i][j] << " ";
        cout << endl;
    }
    cout << ' ' << endl;

    cout << "Second matrix:" << endl;
    for (int с = 0; с < a; с++)
        for (int d = 0; d < b; d++)
            mat2[с][d] = rand() % 15;

    for (int r = 0; r < a; r++)    
    {
        for (int k = 0; k < b; k++)
            cout << mat2[r][k] << " ";
        cout << endl;
    }

    cout << ' ' << endl;
    
    cout << "Summ:" << endl;
    for (int e = 0; e < a; e++)
    {
        for (int f = 0; f < b; f++)
        {
            summ[e][f] = mat1[e][f] + mat2[e][f];
            cout << summ[e][f] << " ";
        }
        cout << endl;
    }

    cout << "\n" << endl;
    cout << "________________________________" << endl;
}

void   SubtractionMatrix()
{
    const int a = 5;
    const int b = 5;
    const int c = 5;
    const int d = 5;
    const int e = 5;
    const int f = 5;
    int mat1[a][b]{};
    int mat2[c][d]{};
    int sub[e][f]{};

    srand(time(NULL));

    cout << "\n" << endl;
    cout << "Fitst matrix:" << endl;
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            mat1[i][j] = rand() % 15;

    for (int i = 0; i < a; i++)    
    {
        for (int j = 0; j < b; j++)
            cout << mat1[i][j] << " ";
        cout << endl;
    }
    cout << ' ' << endl;

    cout << "Second matrix:" << endl;
    for (int c = 0; c < a; c++)
        for (int d = 0; d < b; d++)
            mat2[c][d] = rand() % 15;

    for (int c = 0; c < a; c++)    
    {
        for (int d = 0; d < b; d++)
            cout << mat2[c][d] << " ";
        cout << endl;
    }

    cout << ' ' << endl;
   
    cout << "Subtraction:" << endl;
    for (int e = 0; e < a; e++)
    {
        for (int f = 0; f < b; f++)
        {
            sub[e][f] = mat1[e][f] - mat2[e][f];
            cout << sub[e][f] << " ";
        }
        cout << endl;
    }

    cout << "\n" << endl;
    cout << "________________________________" << endl;
}

void   MultiplicationMatrix()
{
    const int a = 5;
    const int b = 5;
    const int c = 5;
    const int d = 5;
    const int e = 5;
    const int f = 5;
    int mat1[a][b]{};
    int mat2[c][d]{};
    int mult[e][f]{};

    srand(time(NULL));

    cout << "\n" << endl;
    cout << "Fitst matrix:" << endl;

    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            mat1[i][j] = rand() % 15;

    for (int i = 0; i < a; i++)   
    {
        for (int j = 0; j < b; j++)
            cout << mat1[i][j] << " ";
        cout << endl;
    }
    cout << ' ' << endl;

    cout << "Second matrix:" << endl;
    for (int c = 0; c < a; c++)
        for (int d = 0; d < b; d++)
            mat2[c][d] = rand() % 15;

    for (int c = 0; c < a; c++)    
    {
        for (int k = 0; k < b; k++)
            cout << mat2[c][k] << " ";
        cout << endl;
    }

    cout << ' ' << endl;
    
    cout << "Multiplication:" << endl;
    for (int e = 0; e < a; e++)
    {
        for (int f = 0; f < b; f++)
        {
            mult[e][f] = mat1[e][f] * mat2[e][f];
            cout << mult[e][f] << " ";
        }
        cout << endl;
    }

    cout << "\n" << endl;
    cout << "________________________________" << endl;
}

void   TranspositionMatrix()
{
    const int a = 5;
    const int b = 5;
    const int c = 5;
    const int d = 5;
    int mat1[a][b]{};
    int tran[c][d]{};

    srand(time(NULL));

    cout << "\n" << endl;
    cout << "Fitst matrix:" << endl;

    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            mat1[i][j] = rand() % 15;

    for (int i = 0; i < a; i++)    
    {
        for (int j = 0; j < b; j++)
            cout << mat1[i][j] << " ";
        cout << endl;
    }

    cout << ' ' << endl;
   
    cout << "Transposition:" << endl;
    for (int c = 0; c < a; c++)
    {
        for (int d = 0; d < b; d++)
        {
            tran[c][d] = mat1[d][c];
            cout << tran[c][d] << " ";
        }
        cout << endl;
    }

    cout << "\n" << endl;
    cout << "________________________________" << endl;
}

int main()
{
    SummMatrix();
    SubtractionMatrix();
    MultiplicationMatrix();
    TranspositionMatrix();
}
