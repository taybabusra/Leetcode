class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;  // Start of the sliding window
        int zeroCount = 0; // Count of zeros in the current window
        int maxLength = 0; // Maximum length of the subarray with at most k flips

        for (int right = 0; right < nums.size(); ++right) {
            // If the current element is 0, increment the zero count
            if (nums[right] == 0) {
                zeroCount++;
            }

            // If zeroCount exceeds k, shrink the window from the left
            while (zeroCount > k) {
                if (nums[left] == 0) {
                    zeroCount--;
                }
                left++;
            }

            // Update the maximum length of the subarray
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};
