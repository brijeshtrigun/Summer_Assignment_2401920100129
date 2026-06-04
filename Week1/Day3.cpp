QUESTION 1 Move Zeros
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left =0;
        for(int right =0; right < nums.size(); right++){
            if(nums[right] != 0){
                int temp = nums[right];
                nums[right] = nums[left];
                nums[left] = temp;
                left++;
            }
        }
    }
};

Question 2 Squares of a Sorted Array
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int left = 0;
        int right = n-1;
        int j = n-1;
        while(left<=right){
        int sqL = nums[left]* nums[left];
        int sqR = nums[right]* nums[right];
        if(sqL>=sqR){
            res[j]=sqL;
            left++;
        }
        else{
            res[j] = sqR;
            right--;
        } 
        j--;
        }
        return res;
        
    }
};

Question 3 Containerwith Most Water

class Solution {
public:
    int maxArea(vector<int>& height) {
     int left =0;
     int right = height.size()-1;
     int maxArea = 0;
     while(left<right){
        int area = min(height[left], height[right])* (right -left);
        maxArea = max(area, maxArea);
        if(height[left]<height[right]){
            left++;

        }else{
            right--;
        }
     }
     return maxArea;   
    }

};

