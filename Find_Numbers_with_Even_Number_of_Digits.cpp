#include<iostream>
#include<vector>
using namespace std;

int findNumbers(vector<int>& nums) 
{
        int r = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            string s = to_string(nums[i]);
            if(s.length() % 2 == 0)
            {
                r++;
            }
        }
        return r;
}

int main()
{
    vector<int> nums {12,345,2,6,7896};
    findNumbers(nums);
}