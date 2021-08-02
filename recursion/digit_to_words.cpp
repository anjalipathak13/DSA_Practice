#include<iostream>
using namespace std;
void extract_digit(int n,string *digit_name)
{  

  
    if(n==0)
    return;
    
    int remainder=n%10;
    n=n/10;
    extract_digit(n,digit_name);
    cout<<digit_name[remainder]<<" ";
  
  
}/*
   432 -> reaminder=2 .... print two
   | n=43
   43-> remainder=3 ..... print three
   | n=4
   4 ->reaminder =4 ....print four        
   |
   0->remainder=0 ........ return 
   
*/
int main()
{
  int n;
  cin>>n;
  
  string digit_name[10] ={"zero","one","two","three","four","five","six","seven","eight","nine"};
  extract_digit(n,digit_name);
  
}
//output
//432
//four three two
