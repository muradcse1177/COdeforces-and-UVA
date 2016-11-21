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
    char str[]="GBIV";
    int number;
    cin>>number;
    cout<<"ROY";
    int i=0;
    while(i<number-3)
        cout<<str[(i=i+1)%4];
    return 0;
}


