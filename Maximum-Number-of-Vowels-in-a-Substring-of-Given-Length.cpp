class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    int maxVowels(string s, int k) {
        int maxCount = 0, currentCount = 0;

        // Initialize first window
        for (int i = 0; i < k; ++i) {
            if (isVowel(s[i])) {
                currentCount++;
            }
        }

        maxCount = currentCount;

        // Slide the window
        for (int i = k; i < s.length(); ++i) {
            if (isVowel(s[i])) currentCount++;
            if (isVowel(s[i - k])) currentCount--;
            maxCount = max(maxCount, currentCount);
        }

        return maxCount; 
    }
};