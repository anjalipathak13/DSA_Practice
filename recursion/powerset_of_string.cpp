#include <iostream>
using namespace std;

void powerset(string str,int i,string output)
{
  if(i==str.length()){
  cout<<output<<endl;
  return;}
  //when we are including the string
  powerset(str,i+1,output+str[i]);
  //when we are not including the string
  powerset(str,i+1,output);

}

int main() {
  string str;
  cin>>str;
  int n= str.length();
  powerset(str,0," ");
  return 0;

}
//output
//ab--->ab,a,b