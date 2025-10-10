#include<iostream>
using namespace std;

bool isPalindrome(int x) {
        if(x<0)
        {
            return false ;
        }
        else
        {
            string num = to_string(x) ;
            int start = 0 ;
            int end = num.length() - 1 ;
            while(start<=end)
            {
                if(num[start] != num[end])
                {
                    return false ;
                }
                else
                {
                    start++;
                    end--;
                }
            }
        }

        return true;
    }

int main()
{
    int result = isPalindrome(358853);
    cout << result << endl;
}