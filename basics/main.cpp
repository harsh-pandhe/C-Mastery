#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
#define MAX 100
int main()
{
    vector<int> arr(MAX);

    cout << "Enter the no of Elements: ";
    int count, sum = 0;
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        arr[i] = i;
        sum += arr[i];
    }
    cout << "Array Sum: " << sum << endl;

    return 0;
}