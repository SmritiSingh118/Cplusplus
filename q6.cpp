#include <iostream>
using namespace std;
int main()
{int n;
int sum =0;
int count=1;
cout<<"enter no";
cin>>n;
while(count<=n){
    sum=sum+count;
    count++;
}
cout<<"sum is "<<sum;
    return 0;
}
