class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n-1;
        int maxArea = 0;

        while(left < right){
            int h = min(height[left], height[right]);
            int w = right - left;
            int area = h * w;
            maxArea = max(maxArea, area);

            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxArea;
    }
};
