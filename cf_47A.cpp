#include <bits/stdc++.h>
#include <iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
using namespace std;


 void isTriangular(int input)
{
   int currentTriNum = 0;
   int n=0;

   while (currentTriNum < input)
   {
     currentTriNum =currentTriNum+ n;
     n++;
   }

   if (currentTriNum != input)
      printf("NO");
   else
      printf("YES");


}
int main()
{
    int a, n;
    scanf("%d", &n);
    isTriangular(n);
    return 0;
}
