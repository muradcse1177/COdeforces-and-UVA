#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;
int main()
{
   int a,b,n;
	cin>>n>>a>>b;
	if (a+b<n)
	cout<<b+1;
	else if(a+b>=n)
	cout<<n-a;

    return 0;

}


