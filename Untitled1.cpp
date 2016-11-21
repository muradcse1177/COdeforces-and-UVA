#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;



int main()
{
    int a;
    cin>>a;
    for(int i=2; i<=a; i++)
    {
        int a=1;
        for(int j=2; j*j<=i; j++)
        {
            if(i%j==0)
            {
                a=0;
                break;
            }
        }
        if(a==1)
        cout<<i<<" ";

    }

    return 0;

}

