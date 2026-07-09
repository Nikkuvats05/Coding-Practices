class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        vector<int>v;
        int s=0;
        int sum=0;
        
        for(int e=0; e<arr.size(); e++){
            sum=sum+arr[e];
            while(sum>target && s<e){
                sum=sum-arr[s];
                s++;
            }
                if(sum==target){
                    return {s+1 , e+1};
                }
            }
        return {-1};
           
    }
};