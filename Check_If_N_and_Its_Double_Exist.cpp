#include<iostream>
#include<vector>
using namespace std;

bool ckexi(int n , int i , vector<int> arr)
    {
        for(int s = 0 ; s < arr.size() ; s++)
        {
            if(s!=i)
            {
                if(n == (2 * arr[s]))
                {
                    return true;
                }
            }
        }

        return false;
    }

bool checkIfExist(vector<int>& arr) 
{
        for(int i = 0 ; i < arr.size() ; i++)
       {
            if(ckexi(arr[i],i,arr))
            {
                return true;
            }
            
       }
        return false;   
}

int main()
{
    vector<int> arr{10,2,5,3};
    cout << checkIfExist(arr) << endl;
}