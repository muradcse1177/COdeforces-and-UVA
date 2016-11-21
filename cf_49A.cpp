#include <bits/stdc++.h>
#include <iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
using namespace std;

char *removeSpaces(char *str)
{
    int i = 0, j = 0;
    while (str[i])
    {
        if (str[i] != ' ')
           str[j++] = str[i];
        i++;
    }
    str[j] = '\0';
    return str;
}


int main()
{
    char s[110];
    gets(s);
    removeSpaces(s);
    int length=strlen(s);
    for(int i=0; i<length; i++)
    {
        if(s[length-2]=='a'||s[length-2]=='A'||s[length-2]=='e'||s[length-2]=='E'||s[length-2]=='i'||s[length-2]=='I'||s[length-2]=='o'||s[length-2]=='O'||s[length-2]=='u'||s[length-2]=='U'||s[length-2]=='y'||s[length-2]=='Y')
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";

    return 0;
}
