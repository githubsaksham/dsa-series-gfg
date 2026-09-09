class Solution {
public:
    int nthRoot(int n, int m) {
        if (m == 0) {
            return 0;
        }

        int low = 1;
        int high = m;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            long long result = 1;

            for (int i = 0; i < n; i++) {
                result *= mid;

                if (result > m) {
                    break;
                }
            }

            if (result == m) {
                return mid;
            }
            else if (result < m) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return -1;
    }
};