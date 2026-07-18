#include <iostream>
using namespace std;

int main()
{
  char ch='A';
   int i,j,n;
   cout<<"enter no";
   cin>>n;
   for(i=0;i<n;i++){
       for(j=0;j<i;j++){
           cout<<" ";}
           for(j=0;j<n-i;j++){
               cout<<ch;
           }ch++;cout<<endl;
      
       }
   
    return 0;
}
