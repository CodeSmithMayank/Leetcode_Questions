#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
{
        vector<int> result ;
        vector<int> copyvec(nums2);
        sort(nums1.begin(),nums1.end());
        sort(nums1.begin(),nums1.end());
        
        for(int i = 0 ; i < nums1.size() ; i++)
        {
            
            for(int j = 0 ; j < copyvec.size() ; j++)
            {
                if(nums1[i]==copyvec[j])
                {
                    
                    result.push_back(nums1[i]);
                    copyvec[j] = -1;
                    break;
                   
                    
                }
            }
           
        }
        
        return result ;
}

int main()
{
    vector<int> nums1{4,9,5};
    vector<int> nums2{9,4,9,8,4};
    vector<int> res = intersection(nums1,nums2);
}