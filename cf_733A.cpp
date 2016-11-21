#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;
int main()
{
    string s;
    cin>> s;
    int count=0;
    int a=0,m;
    int arr[110];
    int j=0;
    if((s[0]=='A'&&s.length()==1||s[0]=='E'&&s.length()==1||s[0]=='I'&&s.length()==1||s[0]=='O'&&s.length()==1||s[0]=='U'&&s.length()==1||s[0]=='Y'&&s.length()==1))
    {
         cout<<"2";
         return 0;

    }


    for(int i=0;i<s.length();i++)
    {

        if((s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'))
        {
               arr[j]=i;
               count++;
               j++;

        }

           int k=0;
    for(int i=0;i<count-1;i++)
    {
        arr[k]=abs(arr[i]-arr[i+1]);
        k++;
    }
    sort(arr ,arr+count);
    if(arr[0]==0)
    {
        cout<<"1"<<endl;
        return 0;
    }

    else
    {
        cout<<arr[count-2]<<endl;
        return 0;
    }
    }

   int count1=1;
   cout<<count1<<endl;

   for(int i=0;i<s.length();i++)
    {

        if(!(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'))
        {
               count1++;
        }
    }
    cout<<count1<<endl;




    return 0;

}


