class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>po(nums.size()/2);
        vector<int>ne(nums.size()/2);
        vector<int>ans(nums.size());
        int countp=0;
        int countn=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                po[countp]=nums[i];
                countp++;
            }
            else{
                ne[countn]=nums[i];
                countn++;
            }
        }
        countp=0;
        countn=0;
        for(int i=0; i<nums.size(); i++){
            if(i%2==0){
                ans[i]=po[countp];
                countp++;
            }
            else{
                ans[i]=ne[countn];
                countn++;
            }
        }
        return ans;
    }
};