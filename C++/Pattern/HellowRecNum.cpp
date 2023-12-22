#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter Row: " << endl;
    cin >> row;
    cout << "Enter Col: " << endl;
    cin >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= (row - i); j++)
        {
            if (i == 1 || i == row || col ==1 || j == 1 || j == col)
            {
                cout<<j;
            }
            else {
                cout<<" ";
            }
            
        }
        
        cout << endl;
    }
    return 0;
}