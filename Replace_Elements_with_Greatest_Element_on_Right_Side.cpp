#include<iostream>
#include<vector>
using namespace std;

int fdmx(int s , vector<int>& c)
{
    int e = 0;
    for(int i=s ; i < c.size() ; i++)
    {
        e = max(e,c[i]);
    }
    return e;
}

vector<int> replaceElements(vector<int>& arr) 
{
        vector<int> c(arr);
        for(int s = 0 ; s < c.size() ; s++)
        {
            int ind=s+1;
            int ele = fdmx(ind,c);
            c[s]=ele;
        }
        c[c.size()-1]=-1;
        return c;
}

int main()
{
    vector<int> arr{17,18,5,4,6,1};
    vector<int> r = replaceElements(arr);
    for(auto v : r)
    {
        cout << v << " " ;
    }
    
}