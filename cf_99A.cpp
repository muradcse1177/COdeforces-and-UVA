#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;


int main()
{
    int n,i,j,a[105],b[105],sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];

    }
    for(i=0;i<n;i++)
    {
        sum=a[i]+b[i];
        for(j=0;j<n;j++)
        {
            if(sum==a[j]&& i!=j && b[j]+a[j]==a[i])
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}


