class Solution {
public:
   
    int findMin(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;
        
        while (s < e) {
            int mid = s + (e - s) / 2;
            
            // Agar mid element last element se bada hai, 
            // iska matlab minimum element right side mein hai
            if (nums[mid] > nums[e]) {
                s = mid + 1;
            } 
            // Agar chhota ya barabar hai, toh minimum left side mein hai (ya khud mid hai)
            else {
                e = mid;
            }
        }
        
        // Loop khatam hone par s aur e dono minimum element par rukenge
        return nums[s];
    }
};