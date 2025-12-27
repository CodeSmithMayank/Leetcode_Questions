#include<iostream>
#include<vector>
using namespace std;

int returnindex(int s , int no , vector<int>& nums)
        {
            int i = s ;
            for( ; i < nums.size() ; i++)
            {
                if(nums[i]!=no)
                {
                    return i;
                }
            }
            
            return i;
        }

         int removeDuplicates(vector<int>& nums) {
        int s = 0;
        vector<int> r;
        while(s<nums.size())
        {
             int idx = returnindex(s,nums[s],nums);
             r.push_back(nums[s]);
             s = idx;
        }
        nums.clear();
        nums=r;
        return nums.size();
           
        
    }
int main()
{
    vector<int> a{0,0,1,1,1,2,2,3,3,4};
    removeDuplicates(a);
    for(auto v : a)
    {
        cout << v << " " ;
    }
}