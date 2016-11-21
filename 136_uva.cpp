#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int i,count=1;
    for(i=1;i<=count;i++)
    {
        if(i%2==0)
        {
            count++;
        }
        if(i%3==0)
        {
            count++;
        }
        if(i%5==0)
        {
            count++;
        }
        if(count==1500)
        {
            break;
        }
        cout<<count<<" ";
    }
    //cout<<i;
    return 0;
}

