#include<iostream>
using namespace std;
inFlips (string S)
{
    
    int c1=0;
    int c2=0;
    int l=S.length();
    for(int i=0;i<l;i++)
    {
        if(i%2==0&&S[i]=='1')
            c1++;
            if(i%2==0&&S[i]=='0')
            c2++;
            if(i%2!=0&&S[i]=='0')
            c1++;
            if(i%2!=0&&S[i]=='1')
            c2++;
            
    }
    if(c1<c2)
    return c1;
    else
    return c2;
}
int main()
{
	string S;
	cin>>S;
	cout<< minFlips(S)<<endl;
	return 0;
}//output
//001--->101
//output-1