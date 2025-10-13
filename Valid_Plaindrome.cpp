#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPalindrome(string s) {
        string concstr = "";
        for(int start = 0 ; start < s.length() ; start++)
        {
            if(isalpha(s[start]) || isdigit(s[start]))
            {
                concstr+=s[start];
            }
        }
        transform(concstr.begin(),concstr.end(),concstr.begin() , :: tolower);
        int st = 0 ;
        int en = concstr.length()-1;
        while(st<=en)
        {
            if(concstr[st]==concstr[en])
            {
                st++;
                en--;
            }
            else
            {
                return false ;
            }
        }
        return true;
}

int main()
{
    bool result = isPalindrome("A man, a plan, a canal: Panama");
    cout << result << endl;
    
}