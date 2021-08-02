#include<iostream>
using namespace std;
int power_calc(int a, int power)
{ if(power==0)
   return 1;
  else if(power%2==0)
  return power_calc(a,power/2)*power_calc(a,power/2);
  else
  return a*power_calc(a,power/2)*power_calc(a,power/2);
}
int main()
{
  int a;
  int power;
  cin>>a;
  cin>>power;
  cout<<power_calc(a,power);
  
  return 0;
}
//output
//2 3
//8