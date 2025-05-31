class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<int>st; 
        for(int i =0 ; i< sentence.size() ;i++){
            if(sentence[i]>= 'a' && sentence[i] <= 'z'){
                st.insert(sentence[i]); 
            }
        }
        return st.size() == 26;
        
    }
};