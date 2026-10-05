#include <iostream>
#include <string.h>
using namespace std;
int main(){
  int i,j;
  string s;
  cout<<"enter a string";
  getline(cin,s);
  int start =0;
  for(i=0;i<=s.length();i++){
      if(s[i]==' '||s[i]=='\0'){
          for(j=i-1;j>=start;j--){
              cout<<s[j];
             
          } cout<<" ";
              start=i+1;
              
      }
  }
return 0;}

