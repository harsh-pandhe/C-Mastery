#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i, sum = 0;
    cout << "Enter a Number: " << endl;
    cin >> i;

    for (int j = 0; j <= i; j++)
    {
        sum = j + sum;
    }

    cout << "Sum of Natural Numbers: " << sum << endl;
    return 0;
}