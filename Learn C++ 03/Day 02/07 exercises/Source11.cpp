#include<iostream>
using namespace std;


int main() {

    int row = 0;
    cout << "Enter a number of rows : ";
    cin >> row;
    int c = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                c = 1;
            else
                c = c * (i - j + 1) / j;
            cout << c << "  ";
        }
        cout << endl;
    }


}