class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     int n = digits.size();

    // Traverse the digits from the end
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;  // Just add 1 and return if digit < 9
            return digits;
        }
        digits[i] = 0;  // Set current digit to 0 and continue loop for carry
    }

    // If loop finishes, all digits were 9. Insert 1 at beginning
    digits.insert(digits.begin(), 1);
    return digits;
    }
};