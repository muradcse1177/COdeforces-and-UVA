
 #include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

main()
{
    int n,a[13],i,k,x=0;
    cin>>k;
    for (i=1; i<=12; i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+13);
    reverse(a+1,a+13);
    for (i=1; i<=12; i++)
    {
        if (x<k)
            x=x+a[i];
        else
        {
            cout<<i-1<<endl;
            return 0;
        }
    }
    if (x<k)
        cout<<"-1";
    else
    cout<<"12";

    return 0;
}
