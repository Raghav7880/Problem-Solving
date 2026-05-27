import java.util.HashMap;
import java.util.Map;
class Solution {
    public int numberOfSpecialChars(String word) {

        Map<Character, Integer> lower = new HashMap<>();
        Map<Character, Integer> upper = new HashMap<>();

        for (int i = 0; i < word.length(); i++) {
            char ch = word.charAt(i);
            if (Character.isLowerCase(ch)) {
                lower.put(ch, i); 
            } 
            else {
                upper.putIfAbsent(Character.toLowerCase(ch), i);
            }
        }

        int ans = 0;
        for (char ch = 'a'; ch <= 'z'; ch++) {
            if (lower.containsKey(ch) && upper.containsKey(ch)) {
                if (lower.get(ch) < upper.get(ch)) {
                    ans++;
                }
            }
        }
        return ans;
    }
    public static void main(String[] args) {
        Solution solution = new Solution();
        String word = "aAbBcC";
        int result = solution.numberOfSpecialChars(word);
        System.out.println(result); 
    }
}