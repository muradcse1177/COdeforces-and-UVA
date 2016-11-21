#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include <string>
#include<sstream>

using namespace std;



int main()
{
    int a,b;
    cin>>a>>b;
    int sum=a+b;

    stringstream ss1;
    ss1 << a;
    string str_a = ss1.str();
    int length1=str_a.length();
    //cout<<str_a<<endl;

    stringstream ss2;
    ss2 << b;
    string str_b = ss2.str();
    int length2=str_b.length();
    //cout<<str_b<<endl;

    stringstream ss3;
    ss3 << sum;
    string str = ss3.str();
    int length=str.length();
    //cout<<str<<" ";
    for(int j=0;j<9;j++)
    for(int i=0; i<length1; i++)
    {
        if(str_a[i]=='0')
        {
            str_a[i]=str_a[i+1];
            str_a.erase(i,1);
            length1=length1-1;

        }
    }
   //cout<<str_a<<" ";
    for(int j=0;j<9;j++)
    for(int i=0; i<length2; i++)
    {
        if(str_b[i]=='0')
        {
            str_b[i]=str_b[i+1];
            str_b.erase(i,1);
            length2=length2-1;

        }
    }
    //cout<<str_b<<" ";
    for(int j=0;j<9;j++)
    for(int i=0; i<length; i++)
    {
        if(str[i]=='0')
        {
            str[i]=str[i+1];
            str.erase(i,1);
            length=length-1;

        }
    }
    //cout<<str<<" ";


    long long int x=0;
    for(int i=0; i<str_a.length(); i++)
    {

        x = x * 10 + ( str_a[i] - '0' );

    }
    //cout<<x<<" ";

    long long int y=0;
    for(int i=0; i<str_b.length(); i++)
    {

        y = y * 10 + ( str_b[i] - '0' );

    }
    //cout<<y<<" ";
    int long long z=0;
    for(int i=0; i<str.length(); i++)
    {

        z = z * 10 + ( str[i] - '0' );

    }
    //cout<<z<<" ";

    if(x+y==z)
    {
        cout<<"YES";
    }
    else
    cout<<"NO";
    return 0;
}


