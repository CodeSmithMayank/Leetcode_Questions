#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& nums) {
        vector<int> res ;
        vector<int> zero ;
        vector<int> one ;
        vector<int> two ;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i]==0)
            {
                zero.push_back(0);
            }
        }

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i]==1)
            {
                one.push_back(1);
            }
        }

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i]==2)
            {
                two.push_back(2);
            }
        }

        for(int i = 0 ; i < zero.size() ; i++)
        {
            res.push_back(0);
        }

        for(int i = 0 ; i < one.size() ; i++)
        {
            res.push_back(1);
        }

        for(int i = 0 ; i < two.size() ; i++)
        {
            res.push_back(2);
        }

        nums.clear();
        nums = res;

    }

int main()
{
    vector<int> nums{2,0,2,1,1,0,1,0,2,1};
    sortColors(nums);
}