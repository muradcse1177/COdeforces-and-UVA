#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;


int main()
{
    long long number;
    cin>>number;
    if(number==0)
    {
        cout<<"foctor is 1"<<endl;
    }
    else
    {
        int factor=1;
        for(int i=number;i!=0;i--)
    {
        factor=factor*i;
    }
     cout<<"factor is:"<<factor;

    }


   return 0;
}
