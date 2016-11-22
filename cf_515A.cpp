#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int a, b, s;
    cin >> a >> b >> s;
    if (s < abs(a) + abs(b))
    {
        cout << "No";
        return 0;
    }
    if (s == abs(a) + abs(b))
    {
        cout << "Yes";
        return 0;
    }
    if ((s - (abs(a) + abs(b))) % 2)
    {
        cout << "No";
        return 0;
    }
    else
        cout << "Yes";
}




