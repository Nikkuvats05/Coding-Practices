class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       
        int count=0;
        for(int i=0; i<nums.size(); i++){
             int ans=nums[i];
            if(nums[i]==k){
                count++;
            }
            for(int j=i+1; j<nums.size(); j++){
                ans=ans+nums[j];
                if(ans==k){
                    count++;
                   
                }
            }
            
        }
       return count; 
    }
};