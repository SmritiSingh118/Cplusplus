#include <iostream>
using namespace std;
int dectobin(int decnum){
    int ans=0,power=1,rem=0;
    while(decnum>0){
        rem=decnum%2;
         decnum=decnum/2;
        ans=ans+(rem*power);
       
        power=power*10;
    }return ans;
}
int main()
{int decnum=50;
    cout<<dectobin(decnum)<<endl;

    return 0;
}
