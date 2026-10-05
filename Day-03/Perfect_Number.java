//Problem number: 507. Perfect Number
//LeetCode link: https://leetcode.com/problems/perfect-number/description/

class Solution {
    public boolean checkPerfectNumber(int num) {
        int sum = 0;
        for(int i=1; i<=Math.sqrt(num); i++){
            if(num % i == 0){
                sum = sum + i;
                if(i != (num/i)){
                    sum = sum + (num/i);
                }
            }
        }
        sum = sum - num;
        if(sum == num){
            return true;
        }
        return false;
    }
}

