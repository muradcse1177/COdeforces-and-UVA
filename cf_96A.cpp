#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    string number;
    cin>>number;
    int a=0;
    int length=number.length();
    if(length<7)
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<length;i++)
    {
       if((number[i]=='0' &&number[i+1]=='0' &&number[i+2]=='0' &&number[i+3]=='0' &&number[i+4]=='0' &&number[i+5]=='0'&&number[i+6]=='0')||(number[i]=='1' &&number[i+1]=='1' &&number[i+2]=='1' &&number[i+3]=='1' &&number[i+4]=='1' &&number[i+5]=='1'&&number[i+6]=='1'))
       {
           cout<<"YES";
           break;
       }
       a++;
    }

    if(a==length)
    cout<<"NO";
       return 0;

}
