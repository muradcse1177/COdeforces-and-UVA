#include <bits/stdc++.h>
#include <iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int p_1,p_2,p_3,p_4,a,b,counter=0;
    cin>>p_1>>p_2>>p_3>>p_4>>a>>b;
    int x;
    while(a<=b)
    {
        x=(((a%p_1)%p_2)%p_3)%p_4;
        //cout<<x<<" ";
        if(x==a)
        {
             counter++;
        }
        a++;
    }
    cout<<counter<<endl;
    return 0;
}
