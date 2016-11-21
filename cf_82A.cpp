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
    int number1,number2;
     while(number>5)
        {
          number=number/2-2;
        }
    if(number==1)
        cout<<"Sheldon";
    if(number==2)
        cout<<"Leonard";
    if(number==3)
        cout<<"Penny";
    if(number==4)
        cout<<"Rajesh";
    if(number==5)
        cout<<"Howard";
    return 0;
}
