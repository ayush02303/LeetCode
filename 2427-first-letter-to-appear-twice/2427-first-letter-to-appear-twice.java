class Solution {
    public char repeatedCharacter(String s) {
        Map<Character, Integer>mp = new HashMap<>(); 
        for( char c : s.toCharArray()){
            if(mp.containsKey(c)) return c; 
            mp.put(c,1); 
        }
        return '\0'; 
        
    }
}