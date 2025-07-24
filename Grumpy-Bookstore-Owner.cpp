class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        
int n = customers.size();
    int base = 0;

    // Step 1: compute base satisfaction without using the technique
    for (int i = 0; i < n; ++i) {
        if (grumpy[i] == 0) {
            base += customers[i];
        }
    }

    // Step 2: find the window that gives the max extra satisfaction
    int extra = 0, max_extra = 0;
    for (int i = 0; i < n; ++i) {
        if (grumpy[i] == 1) {
            extra += customers[i];
        }

        if (i >= minutes) {
            if (grumpy[i - minutes] == 1) {
                extra -= customers[i - minutes];
            }
        }

        max_extra = max(max_extra, extra);
    }

    return base + max_extra;



    }
};