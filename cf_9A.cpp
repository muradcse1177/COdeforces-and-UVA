#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;
int main()
{
    int y,w,x,z;
    cin>>y>>w;
    if(y>w)
    {
       x=y;
    }
    else
    {
      x=w;
    }
    int gcd;
    int g,f;
    g=6-x+1;
    for(int i=1; i<=g &&i<=6;i++)
    {
        if(g%i==0 && 6%i==0)
        gcd=i;
    }
    cout<<g/gcd<<"/"<<6/gcd;

    return 0;

}




