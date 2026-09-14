class Solution {
    // Function to sort the array according to frequency of elements.
    public ArrayList<Integer> sortByFreq(int arr[]) {
        HashMap<Integer, Integer> map = new HashMap<>();

        for (int num : arr) {
            map.put(num, map.getOrDefault(num, 0) + 1);
        }

        ArrayList<Integer> result = new ArrayList<>();

        for (int num : arr) {
            result.add(num);
        }

        result.sort((a, b) -> {
            int freqA = map.get(a);
            int freqB = map.get(b);

            if (freqA != freqB) {
                return Integer.compare(freqB, freqA);
            }

            return Integer.compare(a, b);
        });

        return result;
    }
}