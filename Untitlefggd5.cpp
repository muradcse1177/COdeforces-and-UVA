#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    while(n)
    {
        if(n%2!=0)
        {
            c++;
        }
        n =n/2;
    }
    cout<<c;
    return 0;
}
