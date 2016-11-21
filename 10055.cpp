#include<cstdio>
using namespace std;
int main()
{
   long long int a,b,result;
    while(1)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        result=a-b;
        if(b>a)
        result=b-a;
        printf("%d\n",result);
    }
    return 0;
}
