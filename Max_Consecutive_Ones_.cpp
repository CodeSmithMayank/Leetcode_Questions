#include<iostream>
#include<vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) 
{
        int c = 0;
        int t = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i]==1)
            {
                t++;
            }
            else
            {
                c = max(c,t);
                t = 0;
            }
        }
        
        c = max(t,c);
        return c;
}

int main()
{
    vector<int> nums = {1,1,0,1,1,1};
    findMaxConsecutiveOnes(nums);
}