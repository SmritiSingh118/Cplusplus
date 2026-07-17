#include <iostream>
using namespace std;
int main()
{char ch='A';
int i,j;
int n;
cout<<"enter no ";
cin>>n;
for(i=0;i<n;i++){
    for(j=0;j<i+1;j++){
        cout<<ch;
       ch++;
    }
    cout<<endl;
}
    return 0;
}
