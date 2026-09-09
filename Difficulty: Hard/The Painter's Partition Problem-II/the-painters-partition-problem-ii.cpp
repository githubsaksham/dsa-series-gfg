class Solution {
public:
    int minTime(vector<int>& arr, int k) {
        int n = arr.size();

        if (k >= n) {
            return *max_element(arr.begin(), arr.end());
        }

        long long low = *max_element(arr.begin(), arr.end());
        long long high = accumulate(arr.begin(), arr.end(), 0LL);

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            int workers = 1;
            long long currentTime = 0;

            for (int time : arr) {
                if (currentTime + time > mid) {
                    workers++;
                    currentTime = time;
                } else {
                    currentTime += time;
                }
            }

            if (workers <= k) {
                // Possible hai, aur minimum time try karo
                high = mid - 1;
            } else {
                // Workers zyada chahiye, time badhao
                low = mid + 1;
            }
        }

        return (int)low;
    }
};