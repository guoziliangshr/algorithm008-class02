class Solution {
    public String reverseOnlyLetters(String S) {
        int left = 0;
        int right = S.length();
        StringBuilder sb = new StringBuilder(S);
        while (left < right) {
            if (Character.isLetter(S.charAt(left)) && Character.isLetter(S.charAt(right))) {
                sb.setCharAt(left, S.charAt(right));
                sb.setCharAt(right, S.charAt(left));
                left++;
                right--;
            } else if (Character.isLetter(S.charAt(left))) {
                right--;
            } else {
                left++;
            }
        }
        return sb.toString();
    }
}