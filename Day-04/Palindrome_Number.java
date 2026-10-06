//Problem number: 9. Palindrome Number
//LeetCode Link: https://leetcode.com/problems/palindrome-number/description/

class Solution {
    public boolean isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int d=0;
        int r=x;
        while(x>0){
            d = (d*10) + (x%10);
            x = x/10;
        }
        if(d == r){
            return true;
        }
        return false;
    }
}
