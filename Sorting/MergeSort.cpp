/* Given an array arr[], its starting position l and its ending position r. 
Sort the array using the merge sort algorithm.

Examples:

Input: arr[] = [4, 1, 3, 9, 7]
Output: [1, 3, 4, 7, 9]
Explanation: We get the sorted array after using merge sort */

//https://www.geeksforgeeks.org/problems/merge-sort/1


class Solution {
  public:
    void merge(vector<int>& arr, int start,int end,int mid)
    {
        vector<int>temp(end-start+1);
        int left=start, right=mid+1, index=0;
        
        while(left<=mid && right<=end)
        {
            if(arr[left]<=arr[right]){
                temp[index] = arr[left];
                index++,left++;
            }
            else{
                temp[index] = arr[right];
                index++,right++;
            }
        }
        
        while(left<=mid){
            temp[index++] = arr[left++];
        }
        while(right<=end){
            temp[index++] = arr[right++];
        }
        
        index=0;
        for(int i=start;i<=end;i++){
            arr[i] = temp[index++];
        }
        
    }
    
    void mergefunction(vector<int>& arr, int start,int end)
    { 
        //base condition 
        if(start >= end)
        return;
        
        int mid = start + (end-start)/2;
        
        mergefunction(arr,start,mid);
        mergefunction(arr,mid+1,end);
        merge(arr,start,end, mid);
        
    }
  
  
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        mergefunction(arr,l,r);
    }
};