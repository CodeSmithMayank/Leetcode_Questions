#include<iostream>
#include<vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_ones_count = 0 ;
        int temp = 0 ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i]==1)
            {
                temp++;
            }
            else if(nums[i]==0)
            {
                max_ones_count = max(max_ones_count,temp);
                temp = 0 ;
            }
        }
        return max(max_ones_count,temp);
    }

int main()
{
    vector<int> v {1,1,0,1,1,1};
    findMaxConsecutiveOnes(v);
}