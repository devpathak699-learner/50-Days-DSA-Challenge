//Problem number: 171. Excel Sheet Column Number
//LeetCode link: https://leetcode.com/problems/excel-sheet-column-number/description/

class Solution {
    public int titleToNumber(String columnTitle) {
        int result = 0;
        for (int i = 0; i < columnTitle.length(); i++) {
            int value = columnTitle.charAt(i) - 'A' + 1;
            result = result * 26 + value;
        }
        return result;
    }
}