#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include<iterator>

using namespace std;
int main()
{
    string result;
    cin >>result;
    int toRem = 0;
    int left=0;
    for (int i = 0; i < result.size(); i++)
    {
        char cur = result[i];
        if (cur == '(')
        {
            left++;
        }
        else
        {
            if (left > 0) left--;
            else toRem++;
        }
    }
    cout << result.length() - toRem-left;
    return 0;
}
