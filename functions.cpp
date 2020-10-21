#include "functions.h"
#include <iostream>
using namespace std;
void initialize(int a[20][20], int n)//make the array set to -1 is empty
{
   // int n;
   // int a[20][20];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            a[i][j] = -1;

    }
}
void display(int a[20][20],int n)//print the array
{
   // int n;
   // int a[20][20];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << "   ";
        cout << endl;
    }

    cout << "----------------------------------------------" << endl;
}

void closeplace(int r, int c,int a[20][20],int n) //close all horizontal,vertical,diagonals possiblities by changing to zero
{
    //int n;
   // int a[20][20];
    int i, j;
    for (i = 0; i < n; i++)
        if (a[i][c] != 1 && a[i][c] == -1) a[i][c] = 0;

    for (i = 0; i < n; i++)
        if (a[r][i] != 1 && a[r][i] == -1) a[r][i] = 0;

    for (i = r, j = c; i < n && j < n; i++, j++)
        if (a[i][j] != 1 && a[i][j] == -1)a[i][j] = 0;

    for (i = r, j = c; i < n && j >= 0; i++, j--)
        if (a[i][j] != 1 && a[i][j] == -1) a[i][j] = 0;


}
