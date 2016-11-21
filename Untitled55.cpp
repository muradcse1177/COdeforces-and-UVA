#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;


int main()
{
    long long num;
    cin>>num;
    int a;
    int arr[100];
    int k=0;
    for(int i=1;i<=num;i++)
    {
        cin>>a;
        for(int j=2;j<=a;j++)
        {
            if(a%j==0)
            {
                arr[k]=j;
                //cout<<arr[k];
                k++;
            }
        }
        cout<<"Case"<<" "<<i<<":"<<" "<<arr[0]<<" "<<arr[1]<<endl;
       //if(a)
    }
    return 0;
}
