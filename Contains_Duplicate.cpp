#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool containsDuplicate(vector<int>& nums) 
{
        sort(nums.begin(),nums.end());
        int start = 0 ;
        int count = 1 ;
        while(start<nums.size()-1)
        {
            if(nums[start]==nums[start+1])
            {
                count++;
                if(count >=2)
                {
                    return true;
                }
            }
            else
            {
                count = 1 ;
            }

            start++;
        }

        return false;
}


int main()
{
    vector<int> nums{};
    bool result = containsDuplicate(nums);
    cout << result << endl;
}