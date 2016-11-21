#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;
int main()
{
    long long int n,a,b,c;
    cin>>n>>a>>b>>c;
    long long int x=n,reminder;
    x=n/a;
    reminder=n%a;
    cout<<x<<reminder;

    return 0;

}



