#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int station;
    cin>>station;
    int sum=0;
    int result=0;
    for(int i=0;i<station;i++)
    {
       int a,b;
       cin>>a>>b;
       sum=sum-a;
       sum=sum+b;
       result=max(result,sum);
    }
    cout<<result;
   return 0;
}
