#include <iostream>
using namespace std;

class A{
    int x;
    public:
    A() {
        x=0;
    }
    void input(){
        cin>>x;
    }
    A operator-( A b){
        A temp;
        temp.x=x-b.x;
        return temp;
    }
    void display(){
        cout<<"difference="<<x;
    }
};
int main(){
    A a,b, c;
    a.input();
    b.input();
    c=a-b;
    c.display();
    return 0;
}


