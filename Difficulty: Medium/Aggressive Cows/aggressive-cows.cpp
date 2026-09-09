class Solution {
public:
    int aggressiveCows(vector<int> &arr, int k) {
        sort(arr.begin(), arr.end());

        int low = 1;
        int high = arr.back() - arr.front();
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int cows = 1;
            int lastPosition = arr[0];

            for (int i = 1; i < arr.size(); i++) {
                if (arr[i] - lastPosition >= mid) {
                    cows++;
                    lastPosition = arr[i];
                }

                if (cows >= k) {
                    break;
                }
            }

            if (cows >= k) {
                // Distance possible hai, aur bada try karo
                ans = mid;
                low = mid + 1;
            } else {
                // Distance bahut bada hai
                high = mid - 1;
            }
        }

        return ans;
    }
};