Given a positive integer n, return the nth row of pascal's triangle.
Pascal's triangle is a triangular array of the binomial coefficients formed by summing up the elements of previous row.

Input: n = 4
Output: [1, 3, 3, 1]
Explanation: 4th row of pascal's triangle is [1, 3, 3, 1].



//


//   O(n^2)
class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        vector<vector<int>> result(n);
        
        for(int i=0;i<n;i++)
        {
            result[i] = vector<int>(i+1, 1); 
            
            for(int j=1;j<i;j++)
            {
                result[i][j] = result[i-1][j] + result[i-1][j-1];
            }
        }
        return result[n-1]; // for n^th row output
        return result; // for 2d array of all pascal triangle
    }
};


//     O(n)
// class Solution {
//   public:
//     vector<int> nthRowOfPascalTriangle(int n) {
//         vector<int> row(n, 1);
        
//         for(int i = 1; i < n - 1; i++) {
//             row[i] = (long long)row[i-1] * (n - i) / i;
//         }
        
//         return row;
//     }
// };