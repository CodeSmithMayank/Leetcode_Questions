#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> checkcount(int no , int s , vector<int>& nums)
        {
            vector<int> r;
            int c = 0;
            while(s<nums.size())
            {
                if(no==nums[s])
                {
                    c++;
                }
                else
                {
                    r.push_back(s);
                    r.push_back(c);
                    break;
                }
                s++;
            }

            if(r.size()==0)
            {
                r.push_back(s);
                r.push_back(c);
            }
            return r;
        }
    
        int repeatedNTimes(vector<int>& nums) {
       int n = 1;
       int ar_sz = nums.size();
       n = ar_sz /2;
       sort(nums.begin(),nums.end());
       int s = 0;
       while(s<nums.size())
       {
            vector<int> r = checkcount(nums[s],s,nums);
            if(r[1]==n)
            {
                return nums[s];
            }
            s = r[0];
       }
       return -1; 
    }
int main()
{
    vector<int> nums{2,1,2,5,3,2};
    repeatedNTimes(nums);
}