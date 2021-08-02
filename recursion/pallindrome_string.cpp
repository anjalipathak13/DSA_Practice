#include <iostream>
using namespace std;
bool pallindrome(string str,int l,int r)
{  
  if(l>=r)
  return true;
  if(str[l]!=str[r])
  return false;
 
 pallindrome(str,l+1,r-1);
 
return true;
}

int main() {
  string str;
  cin>>str;
  int n= str.length();
 if(pallindrome(str,0,n-1)==true)
 cout<<"pallindrome string"<<endl;
 else
 cout<<"not a pallindrome string"<<endl;
  return 0;

}