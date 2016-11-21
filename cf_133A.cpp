#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;


int main()
{
  string str1;
  cin>>str1;
  int i;
  int count=0;
  for( i=0;i<str1.size();i++)
  {
      if(str1[i]=='H'||str1[i]=='Q'||str1[i]=='9')
      {
          cout<<"YES";
          break;
      }
  }
  if(i==str1.size())
  {
      cout<<"NO";
  }
    return 0;
}


