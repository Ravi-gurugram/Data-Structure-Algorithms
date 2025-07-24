class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int start = 0, count = 0, len = 0;
    int n = nums.size();

    for (int end = 0; end < n; ++end) {
        if (nums[end] == 0)
            count++;

        // If more than 1 zero, shrink window from left
        while (count > 1) {
            if (nums[start] == 0)
                count--;
            start++;
        }

        // max length = end - start (we are deleting 1 element)
        len = max(len, end - start);

    }
    return len ;
    }
};