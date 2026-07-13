class Solution {
public:
void bsort(vector<int>& nums, int n){
    if(n==0 || n==1)
    return ;
    for(int i=0; i<nums.size()-1; i++){
        if(nums[i]>nums[i+1]){
            swap(nums[i],nums[i+1]);
        }
    }
        return bsort(nums, n-1);
    
}
    void sortColors(vector<int>& nums) {
        
        bsort(nums, nums.size());
        
    }
};