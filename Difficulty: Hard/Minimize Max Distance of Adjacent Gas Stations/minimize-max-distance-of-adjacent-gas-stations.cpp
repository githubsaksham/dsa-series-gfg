class Solution {
public:
    double minMaxDist(vector<int> &stations, int k) {
        int n = stations.size();

        double low = 0.0;
        double high = stations[n - 1] - stations[0];

        for (int iteration = 0; iteration < 100; iteration++) {
            double mid = low + (high - low) / 2.0;

            int required = 0;

            for (int i = 1; i < n; i++) {
                double gap = stations[i] - stations[i - 1];

                // Number of stations needed in this gap
                required += (int)ceil(gap / mid) - 1;

                if (required > k) {
                    break;
                }
            }

            if (required <= k) {
                // Possible hai, maximum distance aur kam karo
                high = mid;
            } else {
                // Stations insufficient hain
                low = mid;
            }
        }

        return high;
    }
};