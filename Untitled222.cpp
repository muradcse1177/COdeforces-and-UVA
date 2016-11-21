#include <iostream>
#include <string>
using namespace std;

bool isUnique(string _str)
{
        bool char_set[256];
        int len = _str.length();

        memset(char_set, '\0', 256);
        for(int i = 0; i < len; ++i)
        {
            int val = _str[i]- '0';
            if(char_set[val])
            {
                return false;
            }
            char_set[val] = true;
        }

        return true;
    }

    int main()
    {
        cout<<"Value: "<<isUnique("abcd")<<endl;
        return 0;
    }






    int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int cnt = 1;
    for(int i = 1 ;i < s.size() ; i++ )
    {
        if(s[i]!=s[i-1])
        cnt  ++ ;
    }

    if(cnt %2==1) cout << "IGNORE HIM!" << endl;
    else cout << "CHAT WITH HER!" << endl;

}
