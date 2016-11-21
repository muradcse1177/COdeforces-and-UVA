#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int n,p,q;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        cin>>p>>q;
        if(p+2<=q)
        {
            count++;
        }

    }
    cout<<count;
    return 0;
}

