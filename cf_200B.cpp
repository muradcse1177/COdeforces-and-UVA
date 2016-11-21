#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;


int main()
{
    int n;
    cin>>n;
    float arr[110];
    float sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
     printf("%.12f",sum/n);
    return 0;
}

