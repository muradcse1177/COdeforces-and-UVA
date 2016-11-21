#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;


int main()
{
  int number;
  cin>>number;
  string str1;
  cin>>str1;
  int count=0;
  for(int i=0;i<str1.size()-1;i++)
  {
      if(str1[i]==str1[i+1])
      {
          count++;
      }
  }
  cout<<count;



    return 0;
}


