#include <iostream>
#include <string.h>
using namespace std;
int main(){
  int count[500]={0};
  string str;
  int i;
  cout<<"enter a string";
  getline(cin,str);
for(i=0;i<str.length();i++){
count[str[i]]++;}
for(i=0;i<500;i++){
  if (count[i]>0){
cout<<char(i)<<"="<<count[i]<<endl;}}
return 0;}

