QUESTION 1 : TWO SUM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n =nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]== target){
                    return{i,j};
                }
            }
        }
         return{};
    }
};

QUESTION 2 : REMOVE DUPLICATES FROM SORTED ARRAY
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int insertIndex  = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] != nums[i]){
                nums[insertIndex] = nums[i];
                insertIndex++;

            }
        }
        return insertIndex;
    }
};

QUESTION 3 : BEST TIME TO BUY AND SELL STOCK
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        int minPrice = INT_MAX;
        for(int i = 0; i < prices.size(); i++){
            minPrice = min(minPrice, prices[i]);
            maxPro = max(maxPro, prices[i] - minPrice);

        }
      return maxPro;
        
    }
};
