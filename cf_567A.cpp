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
    cin >>number;
    int mm[100000];
    int count=0;
    for(int i=0; i<number; i++)
    {
        cin>>mm[i];
        count++;
    }
    int result[100000];
    int k=0;


    for(int j=0; j<count; j++)
        for(int i=j+1; i<count; i++)
        {
            if(j==0)
            {
                 result[k]=abs(mm[j]-mm[i]);
                  k++;
            }
            else


        }
    int count1=0;
    for(int i=0; i<k; i++)
    {
        cout<<result[i]<< " ";
        count1++;

    }

    for (int i = 0; i < count1; i++)
    {
        for (int j = i + 1; j < count1;)
        {
            if (result[j] == result[i])
            {
                for (k = j; k < count1; k++)
                {
                    result[k] = result[k + 1];
                }
                count1--;
            }
            else
                j++;
        }
    }
    cout<<endl;
    int count2=0;
    for (int i = 0; i < count1; i++)
    {
        count2++;
    }
    sort(result,result+count2);
     for (int i = 0; i < count2; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;

}




