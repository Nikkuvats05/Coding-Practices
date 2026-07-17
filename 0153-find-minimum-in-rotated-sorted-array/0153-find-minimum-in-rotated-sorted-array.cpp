class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int s=0;
        int e=nums.size()-1;
        int min=nums[0];
        for(int i=1; i<nums.size(); i++){
            if(nums[i]<min){
                min=nums[i];
            }
        }
        return min;
    }
};