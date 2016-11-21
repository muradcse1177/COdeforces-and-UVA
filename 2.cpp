#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int print_array(int c,int num[])
    {
        if(c==0)
        return num[0];
        return num[c]+ print_array(c-1,num);
    }

int main()
{

    int number[100];
    int c;
    cin>>c;
    for(int i=0;i<c;i++)
    {
        cin>>number[i];
    }
    cout<<print_array(c-1,number);


    return 0;

}

