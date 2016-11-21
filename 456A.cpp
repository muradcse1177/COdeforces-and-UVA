#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int x1, x2, x3, x4;
    int y1, y2, y3, y4;
    int d;
    cin>>x1>>y1>>x2>>y2;
        if(x1==x2)
        {
            d = abs(y2-y1);
            y3 = y1;
            y4 = y2;
            x3 = x1 + d;
            x4 = x2 + d;
        }
        else if(y1==y2)
        {
            d = abs(x2-x1);
            x3 = x1;
            x4 = x2;
            y3 = y1+d;
            y4 = y2+d;
        }
        else if(abs(x2-x1)==abs(y2-y1))
        {
            x3 = x1;
            y3 = y2;
            x4 = x2;
            y4 = y1;
        }
        else
        {
            cout<<"-1"<<endl;
            return 0;
        }
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    return 0;
}
