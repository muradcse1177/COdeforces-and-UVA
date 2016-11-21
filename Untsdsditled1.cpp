#include<bits/stdc++.h>
using namespace std;

char* remRepeatedChars(char *str)
{
  char arr[128] = {0};
  char *tmp = str;

  while((*str) != '\0')
  {
    char *p = str;

    while(arr[*p] != 0 && *p != '\0')
      p++; // found repetition

    if(str != p) // the previous while was entered
      *str = *p; //Copy the content of p to str.

    arr[*str]++;
    str++;
  }
  return tmp;
}

int main()
{
  char str[] = "geeksforgeeks";
  cout <<endl<< remRepeatedChars(str);
  return 0;
}
