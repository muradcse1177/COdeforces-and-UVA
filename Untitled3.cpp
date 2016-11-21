#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int a=10;
    int ap;
    for(int i=1;i<=19;i++)
    {
        if(i<=10)
        cout<<i<<" ";
        if(i==a)
        {
            ap=20-a;
            cout<<ap<<" ";
            a++;
        }
    }
   return 0;
}

