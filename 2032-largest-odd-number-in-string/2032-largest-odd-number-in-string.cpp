class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        // Traverse from the end of the string to find the last odd digit
        for (int i = n - 1; i >= 0; --i) {
            if ((num[i] - '0') % 2 != 0) {
                // Return the substring from the start to the current position
                return num.substr(0, i + 1);
            }
        }
        // If no odd digit is found, return an empty string
        return "";
    }
};
