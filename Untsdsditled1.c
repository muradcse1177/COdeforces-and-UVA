#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include <string>
#include<sstream>

using namespace std;

int main()
{
	char num[100];
	int dec = 0, i, j, len;
	printf("Enter a number: ");
	gets(num);
	len = strlen(num);
	for(i=0; i<len; i++){
		dec = dec * 10 + ( num[i] - '0' );
	}
	printf("%d", dec);
	return 0;
}int convert(string);

int main()
 {

	string fn, sn, c3;
	int see1, see2, c;
	//string sf, ss;

	cin >> fn;
	cin >> sn;
	c = stoi(fn) + stoi(sn); //101 + 102 = 203
	see1 = convert(fn); // 11
	see2 = convert(sn); // 10

	c3 =  std::to_string(c); // 23



	if ((see1 + see2) == (convert(c3))) {
		printf("YES");
	}
	else
		printf("NO");


	//system("PAUSE");
	return 0;
}

int convert(string x) {
	int l = x.length(), rstoi;
	string ns;
	//istatic_cast<string>(x)
	for (int i = 0; i < l; i++) {

		if (x[i] != '0') {

			ns += x[i];
		}

	}
	rstoi = stoi(ns);
	return rstoi;
}
