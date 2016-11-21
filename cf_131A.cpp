#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;


int main()
{
    string str;
    cin>>str;
    string c,d;
    string fst,scnd;
    int count=0;
    int length=str.length();
    cout<<fst<<" "<<
    for(int i=0;i<length;i++)
    {
        c[i]=str[i];
        if (isupper(c[i]))
            count++;
    }
    if(length==count)
    {
        for(int i=0; i<length; i++)
        {
            c[i]=str[i];
            if (isupper(c[i]))
                d[i]=tolower(c[i]);
            cout<<d[i];
        }
    }
    else if(isupper(str[0]))
    {
            cout<<str;
    }
    else
    {
        //cout<<str;
        string e;
        if(islower(str[0]))
        {
            for(int i=0; i<length; i++)
            {
                if (isupper(str[i]))
                    e[i]=tolower(str[i]);
                else
                    e[i]=toupper(str[i]);

                cout<<e[i];
            }

        }
    }
    return 0;
}
