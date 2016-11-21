#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;


int main()
{
    int arr[1010];
    int n,d;
    cin>>n>>d;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int count=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(abs(arr[i]-arr[j])<=d)
            {
                    count=count+2;
            }

        }
    }
    cout<<count;
    return 0;
}


