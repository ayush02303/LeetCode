class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size(); 
        int i = 0; 
        int j = n/2; 
        int lcount = 0, rcount = 0; 

        unordered_set<char>st; 
        st.insert('u');
         st.insert('o');
          st.insert('i');
           st.insert('e');
            st.insert('a');
             st.insert('A');
              st.insert('O');
               st.insert('I');
                st.insert('E');
                 st.insert('U');

        while( i < j && j< n){
            if(st.find(s[i]) != st.end()) lcount++; 
            if( st.find(s[j]) != st.end() ) rcount++; 

            i++; 
            j++; 
        }
        return lcount == rcount;
        
    }
};