//Problem: Move all zeroes in an integer array to the end while maintaining the relative order of non-zero elements.
//Solution: Use the Two Pointers technique, where i traverses the array and j tracks the next position for a non-zero element.
//Swap non-zero elements into their correct positions, modifying the original array in-place with O(n) time and O(1) space.

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] != 0) {

                swap(nums[i], nums[j]);

                j++;
            }
        }
    }
};
