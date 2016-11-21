#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
#define pi acos(-1.0)
#define feq(a,b) fabs(a-b)<1e-4
using namespace std;
double fgcd(double a,double b)
{
	if(feq(a,0))
	return b;
	if(feq(b,0))
	return a;
	return fgcd(b,fmod(a,b));
}
int main()
{
	double x1,x2,x3,y1,y2,y3,a,b,c,r,an1,an2,an3,an;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	b=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
	c=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	r=a*b*c/sqrt((a+b+c)*(b+c-a)*(a-b+c)*(a+b-c));
	an1=acos((r*r+r*r-a*a)/(2.0*r*r));
	an2=acos((r*r+r*r-b*b)/(2.0*r*r));
	an3=2*pi-an1-an2;
	an=fgcd(an1,fgcd(an2,an3));
	printf("%.6lf\n",pi*r*r*sin(an)/an);
	return 0;
}


