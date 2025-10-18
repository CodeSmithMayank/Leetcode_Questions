#include<iostream>
#include<vector>
using namespace std;

vector<int> rowvalues(int rowno , vector<int> v)
    {
        vector<int> ans;
        for(int i = 0 ; i < rowno ; i++)
        {
            if(i == 0 || i == rowno-1)
            {
                ans.push_back(v[v.size()-1]);
            }
            else
            {
                ans.push_back(v[i-1]+v[i]);
            }
        }
        return ans;
    }
    
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> result ;
        vector<int> tempvec;
        for(int i = 1 ; i <= numRows ; i++)
        {
          
            if(i==1)
            {
                tempvec.push_back(1);
                result.push_back(tempvec);
                tempvec.clear();
            }
            else if(i==2)
            {
                tempvec.push_back(1);
                tempvec.push_back(1);
                result.push_back(tempvec);
            }
            else
            {
                vector<int> indexres = rowvalues(i,tempvec);
                result.push_back(indexres);
                tempvec.clear();
                tempvec = indexres;
            }
        }
        return result;
    }

int main()
{
    vector<vector<int>> result = generate(5);
}