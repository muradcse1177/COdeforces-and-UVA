#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;



int main()
{
  long long n1,n2,gcd;

  cin>>n1>>n2;



  long long a=n1;
  long long b=n2;
  if(n1<n2)
  {
      long long temp=n2;
      n2=n1;
      n1=temp;
  }
  if(n1%n2==0)
  {
      cout<<n1<<endl;
  }
  else{
      long long temp;
  while(n1%n2!=0)
  {

     temp=n1%n2;
     n2=n1;
     n1=temp;
  }
  cout<<n1<<endl;
  }


  cout<<(a*b)/n1;

    return 0;

}

