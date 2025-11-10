#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int thirdMax(vector<int>& nums) 
{
        vector<int> temp ;
        sort(nums.begin(),nums.end()) ;
        int start = 0 ;
        int end = nums.size() - 2 ;
        while(start<=end)
        {
            if(nums[start]!=nums[start+1])
            {
                temp.push_back(nums[start]) ;
            }
            start++;
        }

        if(start==end+1)
        {
            
                temp.push_back(nums[start]) ;
            
        }
        

        if(temp.size()==1)
        {
            return temp[0] ;
        }
        else if(temp.size()==2)
        {
            return temp[1] ;
        }
        
            return temp[temp.size()-3] ;
        
}

int main()
{
    vector<int> nums =  {3,2,1} ;
    thirdMax(nums);
}