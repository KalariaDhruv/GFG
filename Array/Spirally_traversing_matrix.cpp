/* You are given a rectangular matrix mat[][] of size n x m, and your task is to return an array
 while traversing the matrix in spiral form.

Examples:

Input: mat[][] = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]
Output: [1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 6, 7, 11, 10]
 */

//https://www.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1


class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        // code here
        
        vector<int>ans;
        int row = mat.size();
        int col = mat[0].size();
        int top = 0, bottom = row-1;
        int left = 0, right = col-1;
        
        while(left<=right && top<=bottom)
        {
            //print left to right
            for(int i = left; i<=right; i++)
            {
                ans.push_back(mat[top][i]);
            }
            top++; //add one row then increase
            
            //print top to bottom
            for(int i = top; i<=bottom; i++)
            {
                ans.push_back(mat[i][right]);
            }
            right--; // add one column all element then decrease
            
            //condition to not cross top and bottom
            if(top<=bottom)
            {
                //print right to left
                for(int i = right ; i>=left; i--)
                {
                    ans.push_back(mat[bottom][i]);
                }
                bottom--; //add last row then decrease
            }
            
            //condition not to cross left and right cursor
            if(left<=right)
                //print left to top
                for(int i = bottom; i>=top; i--)
                {
                    ans.push_back(mat[i][left]);
                }
                left++;//add first column then increase
        }
        return ans;
    }
};