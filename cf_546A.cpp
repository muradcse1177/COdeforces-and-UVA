#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int k,w,n;
    cin>>k>>w>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
         sum=sum+i*k;
    }
    w=sum-w;
    if(w>=0)
    cout<<w;
    else
    cout<<"0";
}

