#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int n,m,i;
    cin>>n>>m;
    for(i=1; n>0; i++)
    {
        if(!(i%m))
        {
            n++;
        }
        n--;
    }
    cout<<i-1<<endl;
    return 0;
}
