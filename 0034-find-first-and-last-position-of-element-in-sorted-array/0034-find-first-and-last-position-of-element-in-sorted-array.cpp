class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int k) {
        int start = -1, end = -1;
        int low = 0, high = arr.size() - 1;

        // Find the first occurrence of k
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == k) {
                start = mid;
                high = mid - 1; // Keep searching in the left half
            } else if (arr[mid] < k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        low = 0;
        high = arr.size() - 1;

        // Find the last occurrence of k
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == k) {
                end = mid;
                low = mid + 1; // Keep searching in the right half
            } else if (arr[mid] < k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        // If k is not found, return {-1, -1}
        if (start == -1 && end == -1) {
            return {-1, -1};
        }

        return {start, end};
    }
};
