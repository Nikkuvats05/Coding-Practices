class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
         sort(nums.begin(),nums.end());
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]){
                nums.erase(nums.begin()+(i-1)); 
                i--;
            }
        }
            if(nums.size()>=3){
                return nums[nums.size()-3];
            }
            else{
                 return nums[nums.size()-1];
    }
    }
};