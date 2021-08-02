#include <iostream>
using namespace std;
string swap(string str,int l,int r)
{
  char temp=' ';
  temp=str[l];
  str[l]=str[r];
  str[r]=temp;
  return str;
}

void permutation(string str,int l,int r)
{
  if(l==r){
  cout<<str<<endl;
  return;}
  for(int i=l;i<=r;i++)
  {
  str=swap(str,l,i);
  permutation(str,l+1,r);
  str=swap(str,l,i);
  }
}

int main() {
  string str;
  cin>>str;
  int n= str.length();
  permutation(str,0,n-1);
  return 0;

}
//output
//abc-->abc,acb,bac,bca,cba,cba
      /*       abc
             /    \
          a(bc)   b(ac)
          /  \
        abc  acb
      */