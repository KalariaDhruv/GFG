/* Given a 2D square matrix mat[][] of size n x n, rotate it by 180 degrees without using extra space.

Note: You must rotate the matrix in place and modify the input matrix directly.

Examples:

Input: mat[][] = [[1, 2],
                [3, 4]]
Output: [[4, 3], 
        [2, 1]] */

//https://www.geeksforgeeks.org/problems/c-matrix-rotation-by-180-degree0745/1?utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab&utm_source=geeksforgeeks

class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // Code here
        int n = mat.size();
        
        //reverse column wise
        for(int j=0;j<n;j++)
        {
            int start=0,end=n-1;
            while(start<end)
            {
                swap(mat[start][j],mat[end][j]);
                start++,end--;
            }
        }
        
        //reverse row wise
        for(int i=0;i<n;i++)
        {
            int start=0,end=n-1;
            
            while(start<end)
            {
                swap(mat[i][start],mat[i][end]);
                start++,end--;
            }
        }
    }
};