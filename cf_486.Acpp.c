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
    if (n % 2 == 1)
        n = ((n+1)/2)*(-1);
    else
        n=n/2;
    cout<<n<<endl;
    return 0;
}
