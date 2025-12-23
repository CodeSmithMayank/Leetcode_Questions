#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int heightChecker(vector<int>& heights) 
{
    vector<int> c(heights);
    sort(heights.begin(),heights.end());
    int ct=0;
    for(int s = 0 ; s < c.size() ; s++)
    {
        if(c[s]!=heights[s])
        {
            ct++;
        }
    }
    return ct;
}

int main()
{
    vector<int> a{1,1,4,2,1,3};
    cout << heightChecker(a) << endl;
    
}