#include<iostream>
#include<vector>
#include<algorithm>
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

        int thirdMax(vector<int>& nums) {
        int s = 0;
        vector<int> r;
        sort(nums.begin(),nums.end());
        while(s<nums.size())
        {
             int idx = returnindex(s,nums[s],nums);
             r.push_back(nums[s]);
             s = idx;
        }
        if(r.size()==1)
        {
            return r[0];
        }
        else if(r.size()==2)
        {
            return r[1];
        }
         return r[r.size()-3];
           
        
    }
int main()
{
    vector<int> a{3,2,1};
    cout << thirdMax(a) <<  " ";
   
}