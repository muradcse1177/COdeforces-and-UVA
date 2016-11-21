#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int a[200];



int main()
{
	string input1,input2;
	cin >> input1>>input2;

	int length=input1.size();
	for (int i=0;i<input1.size();i++)
	{
		if (input1[i]>='A' && input1[i]<='Z')
			input1[i]=input1[i]+32;
	}

	for (int j=0;j<input2.size();j++)
	{
		if (input2[j]>='A' && input2[j]<='Z')
			input2[j]=input2[j]+32;
	}
     int a=0;
	for(int c=0;c<length;c++)
	{
	    if(input1[c]!=input2[c])
	    {
	        if(input1[c]>input2[c])
	        {
	            cout<<"1";
	            break;
	        }
	        if(input1[c]<input2[c])
	        {
	            cout<<"-1";
	            break;
	        }
	    }
	    else
	    a++;

	}

	if(a==length)
	{
	    cout<<"0";
	}

   return 0;
}
