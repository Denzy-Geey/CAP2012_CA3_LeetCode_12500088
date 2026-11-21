//Problem: Given two sorted integer arrays, nums1 and nums2, find the median of the two arrays without merging them.
//Solution: Use binary search and partitioning on the smaller array to divide both arrays into left and right halves.
//Ensure the left half contains the smaller elements and the right half contains the larger elements. Calculate the median using the boundary elements of the partitions, achieving the required logarithmic time complexity.

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
                // Always perform binary search on the smaller array
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int m = nums1.size();
        int n = nums2.size();

        int left = 0;
        int right = m;

        while (left <= right) {

            // Find partition positions
            int partition1 = left + (right - left) / 2;

            int partition2 = (m + n + 1) / 2 - partition1;

            // Find the boundary elements
            int maxLeft1 = (partition1 == 0)
                           ? INT_MIN : nums1[partition1 - 1];

            int minRight1 = (partition1 == m)
                            ? INT_MAX : nums1[partition1];

            int maxLeft2 = (partition2 == 0)
                           ? INT_MIN : nums2[partition2 - 1];

            int minRight2 = (partition2 == n)
                            ? INT_MAX : nums2[partition2];

            // Check whether the partition is correct
            if (maxLeft1 <= minRight2 &&
                maxLeft2 <= minRight1) {

                // Odd total number of elements
                if ((m + n) % 2 == 1) {
                    return max(maxLeft1, maxLeft2);
                }

                // Even total number of elements
                return (max(maxLeft1, maxLeft2) +
                        min(minRight1, minRight2)) / 2.0;
            }

            // Move binary search to the left
            else if (maxLeft1 > minRight2) {
                right = partition1 - 1;
            }

            // Move binary search to the right
            else {
                left = partition1 + 1;
            }
        }

        return 0.0;
    }
};
