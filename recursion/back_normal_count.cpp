#include<iostream>
using namespace std;
void backcountprint(int n)
{
  if(n==0)
  return;
  cout<<n<<" ";
  backcountprint(n-1);
  
}
void normalprint(int n)
{
  if(n==0)
  return;
  normalprint(n-1);
  cout<<n<<" ";
}
int main()
{
  int n;
  cin>>n;
  backcountprint(n);
  cout<<endl;
  normalprint(n);
  return 0;
}
//output
//5
//5 4 3 2 1
//1 2 3 4 5
