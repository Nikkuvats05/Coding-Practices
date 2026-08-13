class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i=0;
        int j=0;
        vector<int>temp;
        while(i< nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                temp.push_back(nums1[i]);
                i++;
                j++;
            }
            if(i< nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                i++;
            }
            }
            if(i< nums1.size() && j<nums2.size()){
            if(nums1[i]>nums2[j]){
                j++;
            }
            }
        }
       if(temp.size()==0){
        return temp;
       }
        sort(temp.begin(), temp.end());
        vector<int>ans;
        
        for(int i=0; i<temp.size()-1; i++){
            if(temp[i]!=temp[i+1]){
                ans.push_back(temp[i]);
            }
        }
        ans.push_back(temp[temp.size()-1]);
        return ans;
    }
};