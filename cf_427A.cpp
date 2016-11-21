
 #include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

main()
{
    int number,a=0,b=0;
    cin>>number;
    while(number--)
    {
        int input;
        cin>>input;
        if(input<0)
        {
            if(a>0)
            {
                a--;
            }
            else
                b++;
        }
        else
            a=a+input;
    }

    cout<<b;
    return 0;
}
