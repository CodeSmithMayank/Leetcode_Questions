#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int removeElement(vector<int>& nums, int val) 
{
        vector<int> result;
        for(int  i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i]!=val)
            {
                result.push_back(nums[i]);
            }
        }
        sort(result.begin(),result.end());
        nums.clear();
        nums = result;
        return result.size();
}

int main()
{
    vector<int> nums = {0,1,2,2,3,0,4,2};
    removeElement(nums,3);
}