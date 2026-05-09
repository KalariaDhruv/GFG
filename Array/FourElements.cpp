/* Given an array A of N integers. You have to find whether a combination of four elements in the array whose sum is equal to a given value X exists or not.
 

Example 1:

Input:
N = 6
A[] = {1, 5, 1, 0, 6, 0}
X = 7
Output:
1

Explantion:
1, 5, 1, 0 are the four elements which makes sum 7. */


//https://www.geeksforgeeks.org/problems/four-elements2452/1



//**********************           4-sum          *****************/

//two pointer




// User function Template for C++

bool find4Numbers(int A[], int n, int X) {
    
    //sorting (Bubble sort)
    for(int i = n-2;i>=0;i--)
        {
            for(int j=0;j<n-1;j++)
            {
                if(A[j]>A[j+1])
                swap(A[j],A[j+1]);
            }
        }
        
    //two pointer
    
    for(int i=0;i<n-3;i++)
    {
        for(int j=i+1;j<n-2;j++)
        {
            int start = j+1;
            int end = n-1;
            int ans = X - A[i] - A[j];
            
            while(start<end)
            {
                if(A[start]+A[end] == ans)
                return 1;
                else if(A[start]+A[end]>ans)
                end--;
                else
                start++;
            }
        }
    }
    return 0;
}