#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter Rwo & Col: \n";
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if ((i+j)%2 == 0)
            {
                cout << "1";
            }
            else
            {
                cout << "2";
            }
        }
        cout<<endl;
    }
    return 0;
}