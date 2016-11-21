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
    cin >> str;
    sort(str.begin(), str.end());
    int count = 0;
    for(int i = 1 ;i < str.size() ; i++ )
    {
        if(str[i]!=str[i-1])
        count  ++ ;
    }

    if(count %2==0) cout << "IGNORE HIM!" << endl;
    else cout << "CHAT WITH HER!" << endl;

}
