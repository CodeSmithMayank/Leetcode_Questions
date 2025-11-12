#include<iostream>
#include<vector>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) 
{
        vector<int> ans(2*nums.size());
        int n = nums.size() ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            ans[i] = nums[i] ;
            ans[i+n] = nums[i] ;
        }
        return ans ;
}

int main()
{
    vector<int> v = {1,2,3};
    getConcatenation(v);
}