#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) 
{
        vector<int> r;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            r.push_back(nums[i]*nums[i]);
        }
        sort(r.begin(),r.end());
        return r;
}

int main()
{
    vector<int> nums{-4,-1,0,3,10};
    sortedSquares(nums);
}