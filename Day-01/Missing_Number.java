//Problem: 268. Missing Number
//LeetCode Link: https://leetcode.com/problems/missing-number/description/

import java.util.Arrays;
class Solution {
    public int missingNumber(int[] nums) {
        Arrays.sort(nums);
        int size = nums.length;
        for(int i=0; i<size; i++){
            if(nums[i] != i){
                return i;
            }
        }
        return size;
    }
}
