#include <iostream>
using namespace std;
int bintodec(int bin){
    int rem=0,power=1,ans=0;
    while(bin>0){
        rem=bin%10;
        ans=ans+(rem*power);
        bin=bin/10;
        power=power*2;
    }return ans;
}

int main()
{int bin=1100101;
    cout<<bintodec(bin)<<endl;

    return 0;
}
