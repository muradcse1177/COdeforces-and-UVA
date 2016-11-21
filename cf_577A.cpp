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
    long long t_no;
    cin>>t_no;
    int count=0;
    if(t_no==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    for(int i=2;i<=number;i++)
    {
        if(t_no%(i)==0 && t_no/i<=number )
           count++;
    }
     if(t_no<=t_no )
        count++;
    cout<<count;
    return 0;
}
