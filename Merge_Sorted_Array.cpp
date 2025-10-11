#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{       
        vector<int> copyvec ;
        if(m==0)
        {
            nums1.clear() ;
            copyvec = nums2 ;
        }
        else
        {
            for(int i = 0 ; i <m ; i++)
            {
                copyvec.push_back(nums1[i]) ;
            }

            for(int j = 0 ;  j < nums2.size() ; j++)
            {
                copyvec.push_back(nums2[j]);
            }

             nums1.clear();
        }

       
        nums1 = copyvec;
        sort(nums1.begin() , nums1.end());
}


int main()
{
   vector<int> nums1{0} ;
   vector<int> nums2{1};
   int m = 0;
   int n = 1 ;
   merge(nums1,m,nums2,n);

   cout << "After Merge" << endl;
   for(int start = 0 ; start < nums1.size() ; start++ )
   {
    cout << nums1[start] << " " ;
   }
}