#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;
int main()
{
    int number;
    cin>>number;
    int a,b;
    for(int i=1;i<=number;i++)
    {
        cin>>a>>b;
        cout<<"Case"<<" "<<i<<":"<<" "<<a+b<<endl;
    }
    return 0;

}


