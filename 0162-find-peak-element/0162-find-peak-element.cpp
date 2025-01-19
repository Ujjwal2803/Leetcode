class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n = arr.size();
        if (n == 1) return 0; // Single element, it is the peak

        // Handle the edge cases where the first or last element is the peak
        if (arr[0] > arr[1]) return 0;
        if (arr[n - 1] > arr[n - 2]) return n - 1;

        // Iterate through the array to find a peak element
        for (int i = 1; i <= n - 2; i++) {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                return i; // Return the index of the peak
            }
        }

        return -1; // This line should not be reached
    }
};
