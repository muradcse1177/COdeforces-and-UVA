#include <bits/stdc++.h>
#include <iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
using namespace std;



int main()
{
    char str[101];
    gets(str);
    char c;
    int count=0,count1=0;
    for(int i=0; i<strlen(str); i++)
    {
        c=str[i];
        if (isupper(c))
        {
           count++;
        }
        else
        count1++;
    }

    if(count>count1)
    {
        for(int i=0; i<strlen(str); i++)
        {
              c=str[i];
              if (islower(c)) c=toupper(c);
              cout<<c;
        }
    }
    else
    {
        for(int i=0; i<strlen(str); i++)
        {
              c=str[i];
              if (isupper(c)) c=tolower(c);
              cout<<c;
        }
    }
return 0;
}
