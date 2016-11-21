#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;


int main()
{
    int counter1 = 0;
    int counter2 = 0;
    int counter3 = 0;
    string s;
    cin>>s;
    if(s.length()==1)
    {
        cout<<s;
    }
    else
    {
        for ( int i =0; i< s.length(); i++)
        {
            if (s[i]=='1')
            {
                counter1++;
            }
            if (s[i]=='2')
            {
                counter2++;
            }
            if (s[i]=='3')
            {
                counter3++;
            }
        }

        for ( int i =0; i< counter1; i++)
        {
            cout<<1;
            if(i!=counter1-1)
                cout<<'+';
        }

        if(counter2!=0&&counter1!=0)
        {
            cout<<'+';
        }
        for ( int i =0; i< counter2; i++)
        {
            cout<<2;
            if(i!=counter2-1)
                cout<<'+';
        }
        if(counter3!=0&&(counter2!=0||counter1!=0))
        {
            cout<<'+';
        }
        for ( int i =0; i< counter3; i++)
        {
            cout<<3;
            if(i!=counter3-1)
                cout<<'+';
        }
    }
}
