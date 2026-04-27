/* Given two sorted arrays a[] and b[], where each array may contain duplicate elements , 
the task is to return the elements in the union of the two arrays in sorted order.
Union of two arrays can be defined as the set containing distinct common elements 
that are present in either of the arrays.

Examples:

Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3, 6, 7]
Output: [1, 2, 3, 4, 5, 6, 7]
Explanation: Distinct elements including both the arrays are: 1 2 3 4 5 6 7. */

//https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1

class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int n=a.size(), m=b.size();
        int number = 0;
        int first = 0, second = 0;
        
        // to remove duplicate from arr fist
        while(second < n)
        {
            if(number != a[second])
            {
                number = a[second];
                a[first] = number;
                first++;
            }
            second++;
        };
        
        n=first;
        
        // to remove duplicate from array first
        number = 0;
        first = 0,second = 0;
        
        while(second < m)
        {
            if(number != b[second])
            {
                number = b[second];
                b[first] = number;
                first++;
            }
            second++;
        }
        m = first;
        
        //two pointer
        int i=0,j=0;
        vector<int>arr;
        
        while(i<n && j<m)
        {
            if(a[i]==b[j])
            {
               arr.push_back(a[i]);
               i++,j++;
            }
            else if(a[i]<b[j])
            {
                arr.push_back(a[i]);
                i++;
            }
            else
            {
                arr.push_back(b[j]);
                j++;
            }
        }
        while(i<n)
        {
            arr.push_back(a[i]);
            i++;
        }
        while(j<m)
        {
            arr.push_back(b[j]);
            j++;
        }
        return arr;
    }
};