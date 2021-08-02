#include<iostream>
using namespace std;
bool check_sorted(int a[],int index,int n)
{
  if(n>0)
  {
    if(a[index]<a[index+1]){
    check_sorted(a,index+1,n);
    return true;
    }else 
    {
      return false;
    }


  }
  return true;
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  bool result=check_sorted(a,0,n);
  if(result==true)
  cout<<"array is sorted"<<endl;
  else
  cout<<"array is not sorted"<<endl;
  
  return 0;
}
//output
//5
//1 2 3 4 5----->array is sorted