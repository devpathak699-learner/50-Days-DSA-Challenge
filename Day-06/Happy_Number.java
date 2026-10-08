//Problem number: 202. Happy Number
//LeetCode link: https://leetcode.com/problems/happy-number/description/

class Solution {
    public boolean isHappy(int n) {
        while(n != 1){
            int sum = 0;
            while(n > 0){
                int d = n%10;
                sum = sum + d*d;
                n = n/10;
            }
            n = sum;
            if(n==4){
                return false;
            }
        }
        return true;
    }
}
