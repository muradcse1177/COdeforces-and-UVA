#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int n,k,flag=0;
    int arr[100];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0 && arr[i]>=arr[k-1])
        {
            flag++;
        }
    }
    cout<<flag;
    return 0;
}


