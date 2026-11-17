//Problem: Given a sorted array of distinct integers and a target, find its index or determine where it should be inserted to maintain sorted order.
//Solution: Apply Binary Search using left, right, and mid to locate the target efficiently.
//If the target is not found, return left, which represents the correct insertion position.

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

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

        return left;
    }
};
