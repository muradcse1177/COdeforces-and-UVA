#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
int i, j, n, count = 0;
printf("Enter which ugly number you want\n");
scanf("%d", &n);
int b[n];
for(i = 1; count < n; i++)
{
j = i;
while(j % 2 == 0)
{
j = j / 2;
}
while(j % 3 == 0)
{
j = j /3;
}
while(j % 5 == 0)
{
j = j / 5;
}
if(j == 1)
{
b[count] = i;
count++;
}
}
printf("nth ugly number is %d", b[n-1]);
return 0;
}
