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
	string input;
	cin >> input;
	for (int i=0;i<input.size();i++)
	{
		if (input[i]>='A' && input[i]<='Z')
			input[i]=input[i]+32;
	}

	string faka="";

	for (int i=0;i<input.size();i++)
	{
		if (!(input[i]=='a' || input[i]=='u' || input[i]=='i' || input[i]=='e' || input[i]=='o' || input[i]=='y'))
				faka=faka+input[i];
	}
	input=faka;
	faka="";
	for (int i=0;i<input.size();i++)
	{
				faka=faka +'.';
				faka=faka+input[i];
	}
	cout << faka;
}
