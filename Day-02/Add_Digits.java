//Problem: 258. Add Digits
//LeetCode Link: https://leetcode.com/problems/add-digits/description/

class Solution {
    public int addDigits(int num) {
        while(num > 9) {
            int sum = 0;
            while(num > 0) {
                sum = sum + (num % 10);
                num = num / 10;
            }
            num = sum;
        }
        return num;
    }
}
