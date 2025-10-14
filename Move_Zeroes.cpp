#include<iostream>
#include<vector>
using namespace std;

 void moveZeroes(vector<int>& nums) {
        int i = 0 ;
        int j = 0 ;
        while(i<nums.size())
        {
            j = i + 1 ;
            if(nums[i]==0)
            {
                while(j<nums.size())
                {
                    if(nums[j]!=0)
                    {
                        swap(nums[i],nums[j]);
                        break;
                    }
                    else
                    {
                        j++;
                    }
                }
            }
            i++;
        }
    }

int main()
{
    vector<int> nums{0};
    moveZeroes(nums);
    for(auto v : nums)
    {
        cout << v << " " ;
    }
   
}