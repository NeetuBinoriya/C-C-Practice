#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Number: \n";
    cin >> num;
    int reverse = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        reverse = reverse * 10 + lastDigit;
        num /= 10;
    }
    cout << reverse<<endl;
    return 0;
}