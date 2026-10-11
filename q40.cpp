#include <iostream>
using namespace std;

class B;

class A
{
    int x;

public:
    void input() { cin >> x; }
    void display() { cout << x << endl; }

     friend class C;
};

class B
{
    int y;

public:
    void input() { cin >> y; }
    void display() { cout << y << endl; }

    friend class C;
};
class C{
    
public:
void swapValues(A& a, B& b)
{
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
}};

int main()
{
    A obj1;
    B obj2;
    C obj3;

    cout << "Enter two numbers: ";
    obj1.input();
    obj2.input();

    obj3.swapValues(obj1, obj2);

    cout << "After swapping:\n";
    obj1.display();
    obj2.display();

    return 0;
}
