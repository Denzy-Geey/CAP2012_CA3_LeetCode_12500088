// Q704_ Binary Searching...
// Problem: Given a sorted array and a target value, find and return the index of the target; return `-1` if it doesn't exist.
// Solution: Use Binary Search with three variables: `left`, `right`, and `mid` to check the middle element.
// If the middle value is smaller, search the right half; if larger, search the left half, repeating until the target is found or the search ends.

class Solution {
public:
    int search(vector<int>& nums, int target) {
         int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {

            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid;
            }

            else if (nums[mid] < target) {
                left = mid + 1;
            }

            else {
                right = mid - 1;
            }
        }

        return -1;
    }
};
