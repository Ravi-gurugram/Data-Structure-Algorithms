class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        
        deque<int> maxDeque; // stores decreasing elements
        deque<int> minDeque; // stores increasing elements

        int left = 0, right = 0;
        int maxLen = 0;

        while (right < nums.size()) {
            // Maintain decreasing order in maxDeque
            while (!maxDeque.empty() && nums[right] > maxDeque.back()) {
                maxDeque.pop_back();
            }
            maxDeque.push_back(nums[right]);

            // Maintain increasing order in minDeque
            while (!minDeque.empty() && nums[right] < minDeque.back()) {
                minDeque.pop_back();
            }
            minDeque.push_back(nums[right]);

            // Shrink window if constraint is violated
            while (!maxDeque.empty() && !minDeque.empty() && (maxDeque.front() - minDeque.front() > limit)) {
                if (nums[left] == maxDeque.front()) maxDeque.pop_front();
                if (nums[left] == minDeque.front()) minDeque.pop_front();
                left++; // shrink window from left
            }

            maxLen = max(maxLen, right - left + 1);
            right++;
        }

        return maxLen;



    }
};