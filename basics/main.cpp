#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Shape
{
public:
    int value;
    Shape() { cout << "Welcome to Shape" << endl; };
    Shape(int v)
    {
        value = v;
    }
    Shape(const Shape &s)
    {
        value = s.value;
    }
    ~Shape()
    {
        cout << "Closing the Shape" << endl;
    }
};

int main()
{
    Shape s, s1(10);
    Shape s2 = s1;
    cout << s1.value << endl;
    cout << s2.value << endl;

    return 0;
}