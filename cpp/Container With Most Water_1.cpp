class Solution {
public:
    int maxArea(vector<int>& height) {
       int finalArea = 0;
       int left = 0, right = height.size() - 1;

       while(left < right){
            int area = min(height[left], height[right]) * (right - left);

            if(height[left] <= height[right]) left++;
            else right--;

            finalArea = max(area, finalArea);
       }
       return finalArea;
    }
};
