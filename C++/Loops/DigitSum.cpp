#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Number: \n";
    cin >> num;
    int sum = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        sum += lastDigit;
        num/=10;
    }
    cout << sum;
    return 0;
}