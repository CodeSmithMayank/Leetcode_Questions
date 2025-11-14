#include<iostream>
#include<vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) 
{
        vector<int> res;
        int start = 0 ;
        int end = nums.size()-1 ;
        while(start<=end)
        {
            if(nums[start]==target)
            {
                res.push_back(start);
                break;
            }
            start++;
        }

        end = start;
        int st = nums.size() - 1 ;
        while(st>=end)
        {
            if(nums[st]==target)
            {
                res.push_back(st);
                break;
            }
            st--;
        }

        if(res.size()==0)
        {
            res.push_back(-1);
            res.push_back(-1);
        }
        return res;    
}

int main()
{
    vector<int> v = {5,7,7,8,8,10};
    searchRange(v,8);
}