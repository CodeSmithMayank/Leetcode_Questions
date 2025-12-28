#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 string reverseWords(string s) 
{
    string f = "";
    string r = "";
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i]==' ')
        {
            for(int j = f.length()-1; j >=0 ; j--)
            {
                r+=f[j];
            }
            r+=' ';
            f="";
        }
        else
        {
            f+=s[i];
        }
    }

    for(int j = f.length()-1; j >=0 ; j--)
    {
        r+=f[j];
    }

    return r;
        
}

int main()
{
   string s = "Mr Ding";
   cout << reverseWords(s) << " ";
}