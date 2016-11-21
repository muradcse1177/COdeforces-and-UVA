#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int arr[100],arr1[100],n,result;

int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    arr1[0]=abs(arr[n-1]-arr[0]);
    for(int i=1; i<n; i++)
    {
        arr1[i]=abs(arr[i]-arr[i-1]);
    }
    for(int i=1; i<n; i++)
    {
        if(arr1[result]>arr1[i])
        {
            result=i;
        }
    }
    if(result==0)
        cout<<n<<" "<<1;
    else
        cout<<result+1<<" "<<result;
    return 0;
}


