#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
        vector<int> tv;
        vector<int> r;
        int s = digits.size()-1;
        int rm = 1;
        while(s>=0)
        {
            int n = digits[s] + rm;
            if(n>=10)
            {
                tv.push_back(0);
                rm = 1;
            }
            else
            {
                tv.push_back(n);
                rm=0;
            }
            s--; 
        }

        if(rm==1)
        {
            tv.push_back(1);
        }

        for(int i = tv.size()-1 ; i>=0 ; i--)
        {
            r.push_back(tv[i]);
        }
        return r;
    }

int main()
{
    vector<int> a{4,9,2,1};
    vector<int> res = plusOne(a);
    for(auto e : res)
    {
        cout << e << " " ;
    }
   
}