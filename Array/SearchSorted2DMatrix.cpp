/* Given a strictly sorted 2D matrix mat[][] of size n x m and a number x. Find whether the number x is present in the matrix or not.
Note: In a strictly sorted matrix, each row is sorted in strictly increasing order, and the first element of the ith row (i!=0) is greater than the last element of the (i-1)th row.

Examples:

Input: mat[][] = [[1, 5, 9], [14, 20, 21], [30, 34, 43]], x = 14
Output: true
Explanation: 14 is present in the matrix, so output is true. */

//https://www.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1


class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int row,col,mid,start = 0;
        int end = mat.size()*mat[0].size()-1;
        
        while(start<=end)
        {
            mid = (start+end)/2;
            row = mid / mat[0].size();
            col = mid % (mat[0].size());
            
            if(mat[row][col] == x)
            return true;
            else if(mat[row][col] < x)
            start = mid + 1;
            else
            end = mid - 1;
        }
        return false;
    }
};