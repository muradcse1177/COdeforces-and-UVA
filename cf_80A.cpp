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
    int i,j ,number1,number2, isPrime,count1=0;

    cin>>number1>>number2;
    int arr[100];
     int k=0;
    for(i=number1; i<=number2; i++)
    {
        isPrime = 1;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime==1)
        {

           //cout<<i<<" ";
           arr[k]=i;
           count1++;
           k++;
          //cout<<k<<endl;
        }
    }
    //cout<<endl<<count1<<endl;
    int temp=0;
    for(int i=0;i<count1;i++)
    {
        if(number2==arr[1])
        {
            cout<<"YES";
            return 0;
        }
        else
         temp++;
    }
    if(count1=temp)
    {
        cout<<"NO";
    }

    return 0;
}


