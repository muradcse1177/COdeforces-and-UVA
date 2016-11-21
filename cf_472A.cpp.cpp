#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int i,n,factor;
    int number,count=0;
    cin>>number;
    int arr[99999];
    int j=0;
    string s2="";
    for(n=2; n<=number; n++)
    {
        for(i=1; i<sqrt(n); i++)
        {
            if(n%i==0)
            {
                factor=i;
            }
        }
        if(factor>1)
        {
            arr[j]=n;
            j++;
            count++;
        }


    }
    for(int i=0; i<count; i++)
    {
        for(int j=0; j<count; j++)
        {
            if(arr[i]+arr[j]==number)
            {
                cout<<arr[i]<<" "<<arr[j];
                return 0;
            }
        }

    }

    return 0;
}

