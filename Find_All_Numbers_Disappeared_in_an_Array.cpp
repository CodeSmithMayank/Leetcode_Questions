#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool findno(int no , vector<int>& nums)
{
    int s = 0 ;
    int e = nums.size() - 1;
    while(s<=e)
    {
        int m = s+(e-s)/2;
        if(nums[m]==no)
        {
            return true;
        }
        else if(no<nums[m])
        {
            e=m-1;
        }
        else
        {
            s=m+1;
        }
    }

    return false;
}

vector<int> findDisappearedNumbers(vector<int>& nums) 
{
    sort(nums.begin(),nums.end());
    vector<int> r;
    for(int s = 0 ; s < nums.size() ; s++)
    {
        bool fval = findno(s+1,nums);
        if(fval)
        {

        }
        else
        {
            r.push_back(s+1);
        }
    }
    return r;        
}

int main()
{
    vector<int> a{4,3,2,7,8,2,3,1};
    vector<int> r = findDisappearedNumbers(a) ;
    for(auto v : r)
    {
        cout << v << " " ;
    }
    
}