#include<iostream>
#include<vector>
using namespace std;

int small_ele_count(int no , vector<int> nums , int index)
    {
        int count_ele = 0 ;
        for(int start = 0 ; start < nums.size() ; start++)
        {
            if(start!=index && nums[start]!=no && nums[start]<no)
            {
                count_ele++;
            }
        }
        return count_ele;
    }

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int small_count = small_ele_count(nums[i],nums,i);
            res.push_back(small_count);
        }
        return res;
    }
int main()
{
    vector<int> nums = {8,1,2,2,3};
    smallerNumbersThanCurrent(nums);
}