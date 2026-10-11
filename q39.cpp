#include <iostream>
using namespace std;

class B;
class A {
    int real,img;
    public:
    void input(){
        cout<<"enter real no & img"<<endl;
        cin>>real>>img;
        
    }friend void final(A,B);
};
class B {int img,real;
    public:
    void input(){
        cout<<"enter real no & img"<<endl;
        cin>>img>>real;
        
    }friend void final(A,B);
};

void final(A a,B b){
    cout<<"sum="<<a.real+b.real<<"+"<<a.img+b.img<<"i"<<endl;
    
    
}
int main(){
    A obj1;
    B obj3;
    obj1.input();
   
    obj3.input();
    
    final(obj1,obj3);
    return 0;
}

