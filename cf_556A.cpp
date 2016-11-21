#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;


int main()
{
	int num;
	cin>>num;
	string str;
	cin>>str;
    int count=0,count1=0;
    for(int i=0;i<str.length();i++)
	{
	    if(str[i]=='1')
	    {
	        count++;
	    }
	    else
	    count1++;

	}
	int a=max(count,count1);
	int b=min(count,count1);
	count=a-b;
	cout<<count<<endl;
	return 0;
}
