#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int print_array(int num[],int lm,int ul)
    {
        cout<<num[lm]<<" ";
        if(lm!=ul)
        {
            print_array(num,lm+1,ul);
        }
        else
        return 0;
    }

int main()
{

    int number[100];
    int c;
    cin>>c;
    for(int i=1;i<=c;i++)
    {
        cin>>number[i];
    }
    print_array(number,1,c);


    return 0;

}
