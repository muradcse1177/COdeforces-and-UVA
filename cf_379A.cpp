#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;



int main()
{
    double num,re;
    cin>>num>>re;
    double a=num;
    double sum=0;
    while(num>1)
    {
        num=num/re;
        sum=sum+num;
    }
    cout<<int(a+sum);
	return 0;
}
