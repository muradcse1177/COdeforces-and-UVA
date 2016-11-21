#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;


int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int d=(a+b)*c;
    int e=(b+c)*a;
    //int f=(c+a)*b;
    int g=a+(b*c);
    //int h=b+(a*c);
    int i=c+(a*b);
    int j=a*b*c;
    int k=a+b+c;
    e=max(d,e);
    g=max(i,g);
    j=max(j,k);
    e=max(e,g);
    j=max(e,j);
    cout<<j;
    return 0;
}

