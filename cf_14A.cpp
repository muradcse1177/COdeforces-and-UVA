#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;


int main()
{
    char arr[200][200];
    int m,n,i,j;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(i=1; i<=n; i++)
    {
        for( j=1; j<=m-1; j++)
        {
            if(arr[i][j]!=arr[i][j+1])
            {
                cout<<"NO";
                return 0;
            }
        }
    }

    for( i=1; i<=m; i++)
    {
        for( j=1; j<=n-1; j++)
        {
            if(arr[j][i]==arr[j+1][i])
            {
                cout<<"NO";
                return 0;
            }
        }
    }

    cout << "YES" << endl;
    return 0;
}
