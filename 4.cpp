#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
//#include<algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int number[100];
    int c;
    cin>>c;
    for(int i=0;i<c;i++)
    {
        cin>>number[i];
    }
    sort(number,number+c);

    for(int i=0;i!=c;i++)
    {
        cout<<number[i]<<" ";
    }
    cout<<"largest element:"<<number[c-1];
    cout<<" second largest element:"<<number[c-2];
    return 0;

}
