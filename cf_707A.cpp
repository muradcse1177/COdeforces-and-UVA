#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    char arr[110][110];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    int flag=0;
     for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]=='C'||arr[i][j]=='M'||arr[i][j]=='Y')
            {
                flag=1;
            }

        }
    }
    if(flag==1)
    cout<<"#Color";
    else
    cout<<"#Black&White";
    return 0;
}


