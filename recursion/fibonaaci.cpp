#include<iostream>
using namespace std;
int fibonacci(int n)
{
  if(n==0||n==1)
  return n;
 return fibonacci(n-1)+fibonacci(n-2);

}
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  cout<<fibonacci(i)<<" ";
 //cout<<sum<<endl;
  return 0;
}
//output
//5
//0 1 1 2 3 5