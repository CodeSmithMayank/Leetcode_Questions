#include<iostream>
#include<vector>
using namespace std;
bool ApplyBinarySearch(vector<vector<int>> matrix , int target , int row)
{
        int start = 0 ;
        int end = matrix[0].size() - 1 ;
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            if(matrix[row][mid] == target)
            {
                return true ;
            }
            else if(target>matrix[row][mid])
            {
                start = mid + 1 ;
            }
            else
            {
                end = mid - 1 ;
            }
        }

        return false ;
}
   
bool searchMatrix(vector<vector<int>>& matrix, int target) 
{
        
        int finalrow = -1 ;
        for(int row = 0 ; row < matrix.size() ; row++)
        {
            if(target >= matrix[row][0] && target <= matrix[row][matrix[0].size()-1])
            {
                finalrow = row ;
                break;
            }
        }

        if(finalrow != -1)
        {
           bool result = ApplyBinarySearch(matrix , target , finalrow) ;
           if(result)
           {
             return true ;
           }
        }
       
       return false;
}

int main()
{
    vector<vector<int>> matrix = {{1,1}};
    searchMatrix(matrix,0);
}