class Solution {
  public:
    int firstSearch(vector<int> &arr, int k) {
        // code here
        int s=0;
        int e=arr.size()-1;
         int ans;
        
        while(s<=e){
        int mid= s+(e-s)/2;
        
        if(arr[mid]==k){
             ans= mid;
            e=mid-1;
        }
       else if(arr[mid]<k){
            s=mid+1;
        }
       else if(arr[mid]>k){
            e=mid-1;
        }
       
    }
    if(ans>=0 && ans<arr.size()){
         return ans;
    }
    return -1;
    }
};