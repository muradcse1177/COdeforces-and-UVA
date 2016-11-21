#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;


int main()
{
    long long n;
    cin>>n;
    if(n%5==0)
    {
        n=n/5;
        cout<<n;
    }
    else
    {
        n=(n/5)+1;
        cout<<n;
    }


    return 0;
}



