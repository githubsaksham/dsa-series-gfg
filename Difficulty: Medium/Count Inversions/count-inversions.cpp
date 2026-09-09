class Solution {
public:
    long long merge(vector<int>& arr, int low, int mid, int high) {
        vector<int> temp;

        int i = low;
        int j = mid + 1;
        long long count = 0;

        while (i <= mid && j <= high) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i]);
                i++;
            } else {
                temp.push_back(arr[j]);

                // All remaining elements in left half
                // will form an inversion with arr[j]
                count += (mid - i + 1);
                j++;
            }
        }

        while (i <= mid) {
            temp.push_back(arr[i++]);
        }

        while (j <= high) {
            temp.push_back(arr[j++]);
        }

        for (int k = 0; k < temp.size(); k++) {
            arr[low + k] = temp[k];
        }

        return count;
    }

    long long mergeSort(vector<int>& arr, int low, int high) {
        if (low >= high) {
            return 0;
        }

        int mid = low + (high - low) / 2;

        long long count = 0;

        count += mergeSort(arr, low, mid);
        count += mergeSort(arr, mid + 1, high);
        count += merge(arr, low, mid, high);

        return count;
    }

    int inversionCount(vector<int> &arr) {
        return (int)mergeSort(arr, 0, arr.size() - 1);
    }
};