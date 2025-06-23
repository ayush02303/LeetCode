class Solution {
    public String defangIPaddr(String address) {
        String ans = ""; 
        for( char c : address.toCharArray()){
            if( c == '.') ans+= "[.]"; 
            else ans+=c; 
        }
        return ans;
        
    }
}