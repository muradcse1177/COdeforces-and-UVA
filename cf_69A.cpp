#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;


int main()
{
    int number;
    cin>>number;
    int x[110],y[110],z[110];
    int i;
    for(i=0; i<number; i++)
    {
        cin>>x[i]>>y[i]>>z[i];
    }
    int sum=0;
    for(i=0; i<number; i++)
    {
        sum=sum+x[i];
    }
    int sum1=0;
    for(i=0; i<number; i++)
    {
        sum1=sum1+y[i];
    }
    int sum2=0;
    for(i=0; i<number; i++)
    {
        sum2=sum2+z[i];
    }
    if(sum==0 && sum1==0 &&sum2==0)
    {
        cout<<"YES";
    }
    else
    cout<<"NO";


    return 0;
}

