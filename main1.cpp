#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    int i, j;
    int m = 0, trials = 0;
    bool flag = false;
    int n;
    
    cout << "Enter number of queens: ";
    cin >> n;
    int a[20][20];
    do
    {
        initialize(a,n);
        a[0][trials] = 1; m = 1;
        closeplace(0,trials,a,n);
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (a[i][j] == -1 && a[i][j] != 1)//empty place can be used and yet not taken before
                {
                    a[i][j] = 1;
                    closeplace(i, j, a, n);
                    m++;
                }
            }

        }
        if (m == n) { display(a, n); flag = true; }

        trials++;
    } while (trials < n);
    if (flag == false) cout << "sorry cant be solved";
    return 0;
}
