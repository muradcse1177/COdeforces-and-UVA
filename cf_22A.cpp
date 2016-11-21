#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int n,i,j,a[100],k,h,f,r=0;
    cin>>n;
    for(f=0;f<n;f++)
    {
       cin>>a[f];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j] > a[j+1])
            {
                h = a[j];
                a[j] = a[j+1];
                a[j+1] = h;
            }
        }
    }
    for(k=0;k<n-1;k++)
    {
       if(a[k+1] != a[k])
       {
          cout<<a[k+1];
           break;
       }
       else if(a[k+1] == a[k])
        r++;
    }
    if(r == n-1)
        cout<<"NO";
    return 0;
}
