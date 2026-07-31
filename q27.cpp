#include <iostream>
using namespace std;
int main()
{
   int n=7;
   int arr[7]={3,-4,5,4,-1,7,-8};
   int st,end;
   int maxsum=0;
   for(st=0;st<n;st++){
       int currsum=0;
       for(end=st;end<n;end++){
           currsum+=arr[end];
           maxsum=max(currsum,maxsum);
       }
   } cout<<maxsum<<endl;
    return 0;
}
