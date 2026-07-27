class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int count = 1;
        int i = 0;
        while (count <= nums.size()) {
            if (i < nums.size() && nums[i] == count) {
               
                while (i < nums.size() && nums[i] == count) {
                    i++;
                }
                count++;
            } else {
                ans.push_back(count);
                count++;
            }
        }
        
        return ans;
    }
};