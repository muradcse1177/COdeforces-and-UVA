#include <bits/stdc++.h>
#include <iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

bool alcohol(string s)
{
    if ((s=="ABSINTH")||(s=="BEER")||(s=="BRANDY")||(s=="CHAMPAGNE")||(s=="GIN")||(s=="RUM")||(s=="SAKE")||(s=="TEQUILA")||(s=="VODKA")||(s=="WHISKEY")||(s=="WINE"))
    {
        return true;
    }
    else
    {
        return false;
    }
}



int main()
{
    string s;
    int n;
    int p=0;
    cin>>n;
    int i;
    for(i=1; i<=n; i++)
    {
        cin>>s;
        if (alcohol(s)==true)
        {
            p++;
        }
        if ((s.size()==1)&&((s[0]>='0')&&s[0]<='9'))
        {
            p++;
        }
        if ((s[0]=='1')&&(s.size()==2))
        {
            if (s[1]<'8')
            {
                p++;
            }
        }

    }
    cout<<p;
    return 0;
}
