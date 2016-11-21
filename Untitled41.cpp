#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;


int main()
{
     long long a,b,c,num;
    cin>>num;
    int arr[5];
    for(int i=0;i<num;i++ )
    {
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        a=arr[2];
        b=arr[1];
        c=arr[0];
        a=a*a;
        b=b*b;
        c=c*c;
        if(a==b+c)
        {
            cout<<"Case"<<" "<<i+1<<":"<<" "<<"yes"<<endl;
        }
        else
        cout<<"Case"<<" "<<i+1<<":"<<" " <<"no"<<endl;

    }
    return 0;
}
