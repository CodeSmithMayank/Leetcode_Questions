#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 bool validMountainArray(vector<int>& arr) {
        vector<int> inc;
        vector<int> dec;
        int s = 0 ;

        //for increasing
        for( ; s < arr.size() ; s++)
        {
            if(s!=arr.size()-1)
            {
            if(arr[s]==arr[s+1])
            {
                return false;
            }
            else if(arr[s]<arr[s+1])
            {
                inc.push_back(arr[s]);
            }
            else if(arr[s]>arr[s+1])
            {
                break;
            }
            }
            else
            {
                inc.push_back(arr[s]);
            }

        }

        //for decreasing
         for( ; s < arr.size() ; s++)
        {
            if(s!=arr.size()-1)
            {
                if(arr[s]==arr[s+1])
                            {
                                return false;
                            }
                            else if(arr[s]>arr[s+1])
                            {
                                dec.push_back(arr[s]);
                            }
                            else if(arr[s]<arr[s+1])
                            {
                                break;
                            }
            }
            else{
                dec.push_back(arr[s]);
            }
            
        }

        if((inc.size()+dec.size()) == arr.size() && (inc.size()!=0 && dec.size()!=0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
int main()
{
    vector<int> a{0,3,2,1};
    cout << validMountainArray(a) <<  " ";
   
}