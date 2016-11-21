#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int n,b,c,i;
    cin>>n;
    int a[100];
    for(i=0; i<n; i++)
        cin>>a[i];

    int even=0;
    int odd=0;

    for(i=0; i<n; i++)
    {
        if((a[i])%2==0)
        {
            even++;
            b=i;
        }
        else
        {
            odd++;
            c=i;
        }
    }


    if(even==1)
        printf("%d",b+1);
    else
        printf("%d",c+1);
    return 0;
}

