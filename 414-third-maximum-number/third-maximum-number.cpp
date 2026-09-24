class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>temp;
        temp.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[i-1]){
                temp.push_back(nums[i]);
            }
        }
        if(temp.size() <=2){
            return temp[temp.size()-1];
        }
        else{
            return temp[temp.size()-3];
        }
    }
};