#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
    // your code goes here
    string k1="qwertyuiop";
    string k2="asdfghjkl;";
    string k3="zxcvbnm,./";
    string xx;
    char x;
    cin>>x;
    cin>>xx;
    int k11,k22,k33,i;
    if(x=='R'){
        for( i =0 ; i<int(xx.length());i++){
            if((k11 =k1.find(xx[i]))!=-1&&k11!=0)
                cout<<k1[k11-1];
            else if((k22 =k2.find(xx[i]))!=-1&&k22!=0)
                cout<<k2[k22-1];
            else if((k33 =k3.find(xx[i]))!=-1&&k33!=0)
                cout<<k3[k33-1];
            else
                cout<<xx[i];
        }
        cout<<endl;
    }else if(x=='L'){
            for( i =0 ; i<int(xx.length());i++){

            if((k11 =k1.find(xx[i]))!=-1&&k11!=9)
                cout<<k1[k11+1];
            else if((k22 =k2.find(xx[i]))!=-1&&k22!=9)
                cout<<k2[k22+1];
            else if((k33 =k3.find(xx[i]))!=-1&&k33!=9)
                cout<<k3[k33+1];
            else
                cout<<xx[i];
        }
        cout<<endl;
    }

    return 0;
}
