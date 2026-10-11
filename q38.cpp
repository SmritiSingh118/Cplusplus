
#include <iostream>
using namespace std;

class B;

class A
{
    int n;

public:
    void input() { cin >> n; }
    friend void average(A, B);
};

class B
{
    int n;

public:
    void input() { cin >> n; }
    friend void average(A, B);
};

void average(A a, B b)
{
    cout << "Average = " << (a.n + b.n) / 2.0;
}

int main()
{
    A a;
    B b;

    cout << "Enter two numbers: ";
    a.input();
    b.input();

    average(a, b);

    return 0;
}
