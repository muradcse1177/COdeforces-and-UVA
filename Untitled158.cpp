#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    string s1 = "Hello";
    string s2 = "el";
    if(strstr(s1.c_str(),s2.c_str()))
    {
        cout << " S1 Contains S2";
    }

    return 0;
}
