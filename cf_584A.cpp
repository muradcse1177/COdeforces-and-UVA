#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int n,t;
    while(cin>>n>>t)
    {
         if(t == 10)
         {
             if(n == 1)
                puts("-1");
             else
             {
                 cout<<'1';
                 for(int i=0; i<n-1; i++)
                    cout<<'0';
             }
         }
         else
         {
             cout<<t;
             for(int i=0; i<n-1; i++)
                cout<<'0';
         }
    }
}
