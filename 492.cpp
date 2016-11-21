#include<iostream>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<vector>
using namespace std;
int main()
{
    string ab[10];
    for(int i=0;i<5;i++)
    cin>>ab[i];
    //cout<<ab[2]<<endl;
    vector<string>s;
    vector<string>::iterator it;
    s.push_back(ab[2]);
    it=s.begin();
    cout<<*it;
}
