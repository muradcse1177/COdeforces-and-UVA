#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char ch[400];
    while(gets(ch))
    {
    //string st;
    //cin>>st;
    strrev(ch);
    int l=sizeof(ch);
    cout<<"l="<<l<<endl;


    }
}
