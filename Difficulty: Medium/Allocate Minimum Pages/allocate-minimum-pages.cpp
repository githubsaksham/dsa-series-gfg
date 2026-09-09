class Solution {
public:
    int findPages(vector<int> &arr, int k) {
        int n = arr.size();

        if (k > n) {
            return -1;
        }

        int low = *max_element(arr.begin(), arr.end());

        long long high = accumulate(arr.begin(), arr.end(), 0LL);

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            int students = 1;
            long long pages = 0;

            for (int book : arr) {
                if (pages + book > mid) {
                    students++;
                    pages = book;
                } else {
                    pages += book;
                }
            }

            if (students <= k) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};