#include<string>
#include <iostream>
#include<stdlib.h>

using namespace std;

string longestPalindrome(string s);
string reverseStr(string tempStr2);

string longestPalindrome(string s)
{
   string tempStr=s;
   string tempStr2;
   string palin;
   int j=0,i=0,k=0;
   while(j<tempStr.length())
   {
       while(k<(tempStr.length()-j))
       {
           tempStr2.append(tempStr,i,1);
           if(tempStr2.compare(reverseStr(tempStr2))==0)
           {
               if(tempStr2.length()> palin.length())
               {
                   palin=tempStr2;
               }
           }
           k++;
           i++;
       }
    tempStr2.clear();
    j++;
    i=j;
    k=0;
   }
    return palin;
}

string reverseStr(string tempStr2)
{
    string tempStr;
    for(int i=tempStr2.length(); i >= 0 ;i--)
    {
        tempStr.append(tempStr2,i,1);
    }
    return tempStr;
}

int main()
{
    string str="cbbd";
    string str2=longestPalindrome(str);
    cout<< "Longest Palindrome:"<<str2 <<endl;
    return 0;
}
