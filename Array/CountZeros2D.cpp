/* Given a N X N binary Square Matrix where each row and column of the matrix is sorted in ascending order. Find the total number of zeros present in the matrix.

Example 1:

Input:
N = 3
A = {{0, 0, 0},
     {0, 0, 1},
     {0, 1, 1}}
Output: 6
Explanation: 
The first, second and third row contains 3, 2 and 1
zeroes respectively. */


//https://www.geeksforgeeks.org/problems/count-zeros-in-a-sorted-matrix/1

//Back-end complete function Template for C++

class Solution {
  public:
    int countZeros(vector<vector<int>> A) {
        // code here
        int count = 0, row = A.size(), col = A[0].size();
        int i = 0,j = col-1;
        
        while(i < row && j >= 0)
        {
            while(j >=0 && A[i][j] == 1)
            {
                j--;
            }
            count = count + j + 1; 
            i++;
        }
        return count;
    }
};