#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
using namespace std;
int n;
bool check(int x)
{
    int i;
    for(i=2;i<=sqrt(x);i++)
       {if(x%i==0) return true;}
    return false;
}
int main()
{
    scanf("%d",&n);
    int i;
    for(i=2;i<=n/2;i++)
       {if(check(i)&&check(n-i))
           {printf("%d %d\n",i,n-i); return 0;}
       }
    return 0;
}
