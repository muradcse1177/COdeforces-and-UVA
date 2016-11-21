#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int number1,number2,number3,number,count=0;
    cin>>number;
    for(int i=0; i<number; i++)
    {
        cin>>number1>>number2>>number3;
        if(number1+number2+number3>=2)
        {
            count++;
        }
    }
    cout<<count;
       return 0;

}
