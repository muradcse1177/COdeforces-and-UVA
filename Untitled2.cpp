#include<iostream>
using namespace std;
int main()
{
	int n;
	int i,x,g1=0,g2=0,g3=0,g4=0,ans;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		if(x==1)
			g1++;
		else if(x==2)
			g2++;
		else if(x==3)
			g3++;
		else if(x==4)
			g4++;
	}
	if(g3<g1)
	{
		g1=g1-g3;
	}
	else
	{
		g1=0;
	}
	if(g2%2==1)
	{
		if(g1>2)
		{
			g1=g1-2;
		}
		else
		{
			g1=0;
		}
	}
	ans=g4+g3+(g2+1)/2+(g1+3)/4;
	cout<<ans<<endl;
	return 0;
}
