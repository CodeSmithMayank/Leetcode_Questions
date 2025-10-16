#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int missingNumber(vector<int>& nums) 
{
        int n = nums.size() ;
        sort(nums.begin(),nums.end());
        int i = 0 ;
        int tempno = - 1 ;
        for( ; i <n ; i++)
        {
            if(i==nums[i])
            {
               tempno = - 1 ;
            }
            else
            {
                return i;
            }
        }

        if(tempno == -1)
        {
            return n;
        }

        return -1;
}

int main()
{
    vector<int> nums = {9,6,4,2,3,5,7,0,1};
    int result = missingNumber(nums);
}