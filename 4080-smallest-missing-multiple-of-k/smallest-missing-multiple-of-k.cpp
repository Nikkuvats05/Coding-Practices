class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end() );
        
        for(int i=k; i<INT_MAX; i=i +k){
           for(int j=0; j<nums.size(); j++){
            if(nums[j]==i){
                break;
            }
            if(nums[j]!=i && j==nums.size()-1){
                return i;
            }
           }
        }
        return 0;
    }
};