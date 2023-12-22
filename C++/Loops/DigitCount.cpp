#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Number: \n";
    cin >> num;
    int digit =0;
    while(num>0)
    {
        digit++;
        num = num/10;
    }
    cout<<digit;
    return 0;
}