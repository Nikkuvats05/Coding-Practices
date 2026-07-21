class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int s=0;
       int e=nums.size()-1;
       vector<int>ans;
       int find1=0;
       int find2=0;
       int firstoccur;
       while(s<=e){
        int mid= s+(e-s)/2;

        if(nums[mid]==target){
        firstoccur=mid;
        e=mid-1;
        find1=1;
        }
        else if(nums[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
       }
       ans.push_back(firstoccur);

       int lastoccur;
       s=0;
       e=nums.size()-1;

        while(s<=e){
        int mid= s+(e-s)/2;

        if(nums[mid]==target){
        lastoccur=mid;
        s=mid+1;
        find2=1;
        }
        else if(nums[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
       }
       ans.push_back(lastoccur);
       if(find1==1 && find2==1){
        return ans;
       }
       vector<int>anss;
       anss.push_back(-1);
       anss.push_back(-1);
       return anss;
    }
};
 
