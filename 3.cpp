#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{

    int number[100];
    int c;
    cin>>c;
    for(int i=1;i<=c;i++)
    {
        cin>>number[i];
    }
    for(int i=1;i<=c;i++)
    {
        cout<<number[i]<<" ";
    }
    int min=number[0];
    int max=number[0];
    for(int i=1;i<=c;i++)
    {
        if(number[i]>max)
        {
            max=number[i];
        }
        if(number[i]<min)
        {
            min=number[i];
        }
    }
    cout<<endl;
    cout<<"maximum number:"<<max<<endl;
    cout<<"minimum number:"<<min<<endl;
    return 0;

}
