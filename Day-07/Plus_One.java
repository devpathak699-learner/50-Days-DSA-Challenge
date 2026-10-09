//Problem number: 66. Plus One
//LeetCode link: https://leetcode.com/problems/plus-one/description/

import java.math.BigInteger;
class Solution {
    public int[] plusOne(int[] digits) {
        int n = digits.length;
        StringBuilder s = new StringBuilder();
        for(int i = 0; i<n; i++){
            s.append((char)('0' + digits[i]));
        }
        BigInteger number = new BigInteger(s.toString());
        number = number.add(BigInteger.ONE);

        String temp = number.toString();
        int[] req = new int[temp.length()];

        for(int i=0; i<temp.length(); i++){
            req[i] = temp.charAt(i) - '0';
        }
        return req;
    }
}