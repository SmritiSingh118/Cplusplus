#include <iostream>
using namespace std;
int main()
{int marks[]={11,2,3,1,0};
int i, n;
   int size= sizeof(marks)/sizeof(marks[0]);
   n=marks[0];
for(i=1;i<size;i++){
    if(marks[i]<n){
        n=marks[i];
        
    }}cout<<"smallest element is "<<n<<endl;
    return 0;
}
