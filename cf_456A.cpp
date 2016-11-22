#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;


int arr[100010],arr1[100010];
int main()
{
    int num,count=0;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>arr[i]>>arr1[i];
        if(arr[i]!=arr1[i])
			count++;
    }
    if(count)
        cout<<"Happy Alex";
    else
    cout<<"Poor Alex";

}




