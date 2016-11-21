#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;


int main()
{
    int n1=1,n2=1,temp;
    int number;
    cin>>number;
    if(number==1)
    {
        cout<<n1;
    }
    else if(number==2)
    {
        cout<<n1<<" "<<n2<<" ";
    }
    else
    {
        cout<<n1<<" "<<n2<<" ";
        for(int i=3;i<=number;i++)
    {
        temp=n1+n2;
        n1=n2;
        n2=temp;
        cout<< temp<<" ";
    }
    }

   return 0;
}
