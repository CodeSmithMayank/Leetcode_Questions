#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void shtval(int i , vector<int>& a)
{
    int e = a.size()-1;
    while(e>=i)
    {
        if(e==i)
        {
            a[e]=0;
        }
        else
        {
            a[e]=a[e-1];
            
        }

        
        e--;
    }
}

void duplicateZeros(vector<int>& arr) 
{
   int s = 0;
   while(s<arr.size())
   {
        if(arr[s]!=0)
        {
            s++;
        }
        else
        {
            shtval(s+1,arr);
            s+=2;
        }
   }  
   
   
}

int main()
{
    vector<int> a{1,2,3};
    duplicateZeros(a);  
    for(auto v : a)
    {
        cout << v << " " ;
    } 
}