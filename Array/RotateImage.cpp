/* Given a square matrix mat[][] of size n x n. The task is to rotate it by 90 degrees in an anti-clockwise direction without using any extra space. 

Examples:

Input: mat[][] = [[0, 1, 2], 
                [3, 4, 5], 
                [6, 7, 8]] 
Output: [[2, 5, 8],
        [1, 4, 7],
        [0, 3, 6]] */

// https://www.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1

class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int row = mat.size();
        int col = row;
        
        for(int i=0; i<row; i++)
        {
            for(int j=i; j<col; j++)
            {
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(int i=0;i<row;i++)
        {
            int top = 0 , bottom = row-1;
            
            while(top<bottom)
            {
                swap(mat[top][i],mat[bottom][i]);
                top++,bottom--;
            }
        }
    }
};

//rotate image for 90 degrees in clockwise

    // int row = mat.size();
    // int col = row;
        
    // for(int i=0; i<row; i++)
    // {
    //     for(int j=i; j<col; j++)
    //     {
    //         swap(mat[i][j],mat[j][i]);
    //     }
    // }
    // for(int i=0;i<row;i++)
    // {
    //     reverse(amt[i].begin(),mat[i].end());
    // }
