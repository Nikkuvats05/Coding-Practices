class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        #include <vector>
        int first = findBound(nums, target, true);
        
        // Agar target array mein hai hi nahi, toh direct [-1, -1] return kar do
        if (first == -1) {
            return {-1, -1};
        }
        
        int last = findBound(nums, target, false);
        return {first, last};
    }

private:
    int findBound(const vector<int>& nums, int target, bool isFirst) {
        int left = 0;
        int right = nums.size() - 1;
        int bound = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                bound = mid; // Target mil gaya, potential index save kar lo
                if (isFirst) {
                    right = mid - 1; // Left side check karo first occurrence ke liye
                } else {
                    left = mid + 1;  // Right side check karo last occurrence ke liye
                }
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return bound;
    }
};
 
