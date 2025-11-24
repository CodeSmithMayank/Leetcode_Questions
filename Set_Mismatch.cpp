#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool check_num(int n , vector<int>& nums)
{
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(n == nums[i])
            {
                return true;
            }
        }
        return false;
}

vector<int> findErrorNums(vector<int>& nums) 
{
        vector<int> r;
        sort(nums.begin(),nums.end());
        int s = 0;
        int e = nums.size() - 1;
        while(s<e)
        {
            if(nums[s]==nums[s+1])
            {
                r.push_back(nums[s]);
                break;
            }
            s++;
        }
        for(int i = 1 ; i <= nums.size() ; i++)
        {
            bool cno = check_num(i,nums);
            if(!cno)
            {
                r.push_back(i);
                break;
            }
        }
        return r;
}

int main()
{
    vector<int> nums{1,2,2,4};
    findErrorNums(nums);
}