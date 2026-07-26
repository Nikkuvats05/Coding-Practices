class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
           
            int h = min(height[left], height[right]);
            int width = right - left;
            int current_area = h * width;

            max_water = max(max_water, current_area);

          
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return max_water;
 
        
    }
};