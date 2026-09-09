class Solution {
public:
    vector<int> sortByFreq(vector<int>& arr) {
        unordered_map<int, int> freq;

        // Count frequency
        for (int num : arr) {
            freq[num]++;
        }

        // Sort using frequency and value
        sort(arr.begin(), arr.end(), [&](int a, int b) {
            if (freq[a] != freq[b]) {
                return freq[a] > freq[b];
            }

            return a < b;
        });

        return arr;
    }
};