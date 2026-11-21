//Problem: Given an array of non-negative integers representing an elevation map, where each element represents the height of a vertical bar, calculate how much rainwater can be trapped between the bars after rainfall.
//Solution: Use two pointers, `left` and `right`, to traverse the array from opposite ends while maintaining `leftMax` and `rightMax` to track the maximum heights encountered.
//Calculate the trapped water at each position using the difference between the current height and the smaller maximum boundary. Continue moving the pointers inward until they meet, returning the total trapped water.

class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;

        int leftMax = 0;
        int rightMax = 0;

        int water = 0;

        while (left < right) {

            if (height[left] < height[right]) {

                if (height[left] >= leftMax) {
                    leftMax = height[left];
                }
                else {
                    water += leftMax - height[left];
                }

                left++;
            }

            else {

                if (height[right] >= rightMax) {
                    rightMax = height[right];
                }
                else {
                    water += rightMax - height[right];
                }

                right--;
            }
        }

        return water;
    }
};
