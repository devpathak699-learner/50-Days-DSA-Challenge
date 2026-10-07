//Problem number:  367. Valid Perfect Square
//LeetCode link: https://leetcode.com/problems/valid-perfect-square/description/

class Solution {
    public boolean isPerfectSquare(int num) {
        long i = 1;
        while(i*i <= num){
            if(i*i == num){
                return true;
            }
            i++;
        }
        return false;
    }
}
