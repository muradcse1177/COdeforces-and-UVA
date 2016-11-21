#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;



int main()
{
    string s;
    cin>>s;
    string f="";
    int length=s.length();
    for(int i=0;i<length;i++)
    {
        if((s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'))
        {
            s[i]=' ';
            s[i+1]=' ';
            s[i+2]=' ';
        }
    }
    cout<<s;
	return 0;
}
