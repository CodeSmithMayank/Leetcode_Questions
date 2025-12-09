#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
        vector<int> r;
        for(int i = 0 ; i <m ; i++)
        {
             r.push_back(nums1[i]);
        }
        for(int i = 0 ; i < nums2.size() ; i++)
        {
             r.push_back(nums2[i]);
        }
        nums1.clear();
        sort(r.begin(),r.end());
        nums1=r;
}

int main()
{
    vector<int> nums1{1,2,3,0,0,0};
    vector<int> nums2{2,5,6};
    merge(nums1,3,nums2,2);
}