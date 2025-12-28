#include<iostream>
#include<vector>
using namespace std;

int countNegatives(vector<vector<int>>& grid) {
        int r = 0;
        int nc = 0;
        while(r<grid.size())
        {
            int c = 0;
            while(c<grid[0].size())
            {
                if(grid[r][c]<0)
                {
                    nc++;
                }
                c++;
            }
            r++;
        }
        return nc;
    }

int main()
{
    vector<vector<int>> grid{{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};
    countNegatives(grid);
}