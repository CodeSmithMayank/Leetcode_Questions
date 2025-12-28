#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool twicecheck(int i , int no , vector<int>& nums)
{
    for(int s = 0 ; s < nums.size() ; s++)
    {
        if(i!=s)
        {
            if(no<(2*nums[s]))
            {
                return false;
            }
        }
    }
    return true;
}

int dominantIndex(vector<int>& nums) {
        for(int s = 0 ; s < nums.size() ; s++)
        {
            bool tc = twicecheck(s,nums[s],nums);
            if(tc)
            {
                return s;
            }
        }
        return -1;
    }

int main()
{
    vector<int> a{3,6,1,0};
    cout << dominantIndex(a) << " ";
   
}