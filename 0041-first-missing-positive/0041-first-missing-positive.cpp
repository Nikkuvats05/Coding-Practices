class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums[0]>1){
            return 1;
        }
       int i=0;
       while(i<nums.size() && nums[i]<=0){
        i++;
       }
       if(i==nums.size() || nums[i]>1){
        return 1;
       }
       while(i<nums.size()-1){
        if(nums[i]==nums[i+1]){
            i++;
        }
        else if(nums[i]+1 == nums[i+1]){
            i++;
        }
        else{
            return nums[i]+1;
        }
       }
       return nums[nums.size()-1]+1;

    }
};