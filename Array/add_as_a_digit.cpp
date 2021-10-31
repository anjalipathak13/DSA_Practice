#include<iostream>
using namespace std;
#include<vector>
int main()
{
	vector<int>v;
	v.push_back(9);
	v.push_back(9);
	v.push_back(9);
	for(int i=0;i<v.size();i++)
	cout<<v[i];
	cout<<endl;
	 int carry=0;
	int j=v.size()-1;
	v[j]=v[j]+1;
	carry=v[j]/10;
	v[j]=v[j]%10;
	
	
	for(int i=v.size()-2;i>=0;i--)
	{      
	  if(carry==1){
	  
	        v[i]=v[i]+1;
	        carry=v[i]/10;
	        v[i]=v[i]%10;
	    }
	    
	}
		if(carry==1)
		v.insert(v.begin(),1);
		
	for(int i=0;i<v.size();i++)
	cout<<v[i];
	return 0;
	
}