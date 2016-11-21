#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;


int main()
{
    long long int number,position;
    cin>>number>>position;

    if(position <= (number+1)/2)
    {
        cout<<2*position - 1;
    }
    else
    {

        cout<< 2*(position-(number+1)/2);
    }

    return 0;
}
