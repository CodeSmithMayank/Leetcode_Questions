#include<iostream>
#include<vector>
using namespace std;

bool check_substring(char ch , int index , vector<string> strs , int start)
{
    for(int j = start ; j < strs.size() ; j++)
    {
        string s = strs[j];
        if(s[index] != ch)
        {
           return false;
        }
    }
    return true ;
}

string longestCommonPrefix(vector<string>& strs) 
{
        string s = "";
        string st = strs[0];
        for(int  i = 0 ; i < st.length() ; i++)
        {
            bool value = check_substring(st[i],i,strs,1);
            if(value)
            {
              s+=st[i];
            }
            else
            {
              return s;
            }
        }

        return s;
}

int main()
{
    vector<string> strs{"flower","flow","flight"};
    longestCommonPrefix(strs);
}