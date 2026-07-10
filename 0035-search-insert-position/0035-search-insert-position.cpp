class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        if(nums[e]<target){
            return e+1;
        }
        if(nums[0]>target){
            return 0;
        }
        while(s<=e){
            int mid= s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                if(s==e-1){
                    return mid;
                }
                else if(s==e){
                    return mid;
                }
                e=mid-1;
                
            }
            if(nums[mid]<target){
                 if( s==e){
                    return mid+1;
                }
                s=mid+1;
               
            }
        }
        return -1;
    }
};