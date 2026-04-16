/* Alternate Positive Negative
Difficulty: EasyAccuracy: 33.86%Submissions: 240K+Points: 2Average Time: 10m
Given an unsorted array arr containing both positive and negative numbers. Your task is to rearrange the array and convert it into an array of alternate positive and negative numbers without changing the relative order.

Note:
- Resulting array should start with a positive integer (0 will also be considered as a positive integer).
- If any of the positive or negative integers are exhausted, then add the remaining integers in the answer as it is by maintaining the relative order.
- The array may or may not have the equal number of positive and negative integers.

Examples:

Input: arr[] = [9, 4, -2, -1, 5, 0, -5, -3, 2]
Output: [9, -2, 4, -1, 5, -5, 0, -3, 2]
Explanation: The positive numbers are [9, 4, 5, 0, 2] and the negative integers are [-2, -1, -5, -3]. Since, we need to start with the positive integer first and then negative integer and so on (by maintaining the relative order as well), hence we will take 9 from the positive set of elements and then -2 after that 4 and then -1 and so on. 
*/


//https://www.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1?sortBy=submissions&category%5B%5D=Arrays&page=2&difficulty%5B%5D=0


class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        int posi=0,negi=0;
        int n=arr.size();
        
        vector<int> positive;
        vector<int> negative;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=0) // 0 consider as positive number
            {
                positive.push_back(arr[i]);
            }
            else
            {
                negative.push_back(arr[i]);
            }
        }
        
        int k=0;
        while(k<n)
        {
            if(posi<positive.size())
            {
                arr[k] = positive[posi];
                k++,posi++;
            }
            if(negi<negative.size())
            {
                arr[k]=negative[negi];
                k++,negi++;
            }
        }
    }
};