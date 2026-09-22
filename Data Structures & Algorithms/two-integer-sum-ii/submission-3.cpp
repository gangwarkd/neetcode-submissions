class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {

            // If the sum is exactly target
            if (numbers[left] + numbers[right] == target) {
                return {left + 1, right + 1};
            }

            // Sum is too small
            if (numbers[left] + numbers[right] < target) {
                left++;
            }

            // Sum is too large
            else {
                right--;
            }
        }

        return {};
    }
};