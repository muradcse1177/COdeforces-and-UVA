#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int hold;
    int array[3];

    for(int i=0; i<3; i++)
    {
        cin>>array[i];
    }
    for(int i=0; i<3; i++)
    {
        cout<<array[i]<<" ";
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            if(array[j]<array[j+1])
            {
                hold=array[j];
                array[j]=array[j+1];
                array[j+1]=hold;
            }
        }
    }
    int a=array[0]-array[1];
    int b=array[0]-array[2];
    int c=array[1]-array[2];
    int d=max(a,b);
    int e=max(d,c);
    cout<<e;
    return 0;
}
