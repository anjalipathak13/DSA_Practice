#include <iostream>
using namespace std;
int jump_on_stairs(int n)
{
  if(n==0)
  return 1;
 if(n<0)
  return 0;
  return jump_on_stairs(n-1)+jump_on_stairs(n-2)+jump_on_stairs(n-3);


}

int main() {
  int n;
  cin>>n;
  int total_ways_to_jump=jump_on_stairs(n);
  cout<<"total_ways_to_jump="<<total_ways_to_jump<<endl;
  return 0;
  

}
