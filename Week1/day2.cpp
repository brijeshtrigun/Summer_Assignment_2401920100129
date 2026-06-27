QUESTION 1 : MAXIMUM SUBARRAY
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = nums[0];
        int maxSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currSum = max(nums[i], currSum + nums[i]);
            maxSum = max(maxSum, currSum);
        }

        return maxSum;
    }
};

QUESTION 2 : CONTAINS DUPLICATE
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> traversed;
        for(int num : nums){
            if(traversed.count(num))
            return true;
            traversed.insert(num);
        }
        return false;
    }
};

QUESTION 3 : MAXIMUM AVERAGE SUBARRAYS I
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long sum = 0;

        // Calculate sum of the first window
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        long long maxSum = sum;

        // Slide the window
        for (int i = k; i < nums.size(); i++) {
            sum += nums[i];         // Add new element
            sum -= nums[i - k];     // Remove leftmost element

            if (sum > maxSum) {
                maxSum = sum;
            }
        }

        return (double)maxSum / k;
    }
};
