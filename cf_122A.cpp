#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;


int main()
{
    int n;
    cin>>n;
    if( n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0 || n % 447 == 0 || n % 474 == 0|| n % 477 == 0|| n % 747 == 0 || n % 774 == 0)
    {
        printf("YES");
    }
    else
    {
       cout<<"NO";
    }
    return 0;
}
