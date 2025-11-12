#include<iostream>
#include<vector>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;
        for(int i = 0 ; i < n ; i++)
        {
            res.push_back(nums[i]);
            res.push_back(nums[i+n]);
        }
        return res;
    }

int main()
{
    vector<int> v {2,5,1,3,4,7};
    shuffle(v,3);
}