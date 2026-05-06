/* You are given an array arr[] of non-negative integers. You have to move all the zeros in the array to the right 
end while maintaining the relative order of the non-zero elements. The operation must be performed in place, 
meaning you should not use extra space for another array.

Examples:

Input: arr[] = [1, 2, 0, 4, 3, 0, 5, 0]
Output: [1, 2, 4, 3, 5, 0, 0, 0]
Explanation: There are three 0s that are moved to the end. */

//https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1


//two pointer
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n =arr.size();
        int i=0,j=0;
        
        while(j<n)
        {
            if(arr[j]!=0)
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                i++;
            }
            j++;
        }
    }
};


// created new array with same size all value is zero
//.     int n = arr.size();
//      vector<int> temp(n,0);
// 	    int j=0;
// 	    for(int i=0;i<n;i++)
// 	    {
// 	        if(arr[i]!=0)
// 	        {
// 	            temp[j]=arr[i]; //stored all no 0 values in new array
// 	            j++;
// 	        }
// 	    }
	    
//	    swipe back all values to original array
// 	    for(int i=0;i<n;i++)
// 	    arr[i]=temp[i];
// 	}
	
	