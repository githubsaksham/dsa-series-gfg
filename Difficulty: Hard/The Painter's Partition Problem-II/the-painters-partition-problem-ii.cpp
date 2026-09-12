class Solution {
public:
    int minTime(vector<int>& arr, int k) {
        long long low = *max_element(arr.begin(), arr.end());
        long long high = accumulate(arr.begin(), arr.end(), 0LL);

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            int workers = 1;
            long long time = 0;

            for (int board : arr) {
                if (time + board > mid) {
                    workers++;
                    time = board;
                } else {
                    time += board;
                }
            }

            if (workers <= k) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return (int)low;
    }
};