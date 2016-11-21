#include<bits/stdc++.h>
using namespace std;


long long int arr[100010];
int main()
{
    int number;
    cin>>number;
    int arr[100010];
    int count=0;
    for(int i=0;i<number;i++)
    {
        cin>>arr[i];
        count++;
    }
    int a=1,count1=1;
     for(int i=1;i<count;i++)
    {
        if(arr[i]>=arr[i-1])
        {
            count1++;
            a=max(count1,a);
        }
         else
        {
            count1=1;
        }
    }
    cout<<a;



	return 0;
}
