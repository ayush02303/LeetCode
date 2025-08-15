class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st; 

        for( auto num : asteroids){
            while( !st.empty() && num < 0  && st.top() > 0){
                int sum = num+ st.top(); 

                if( sum < 0) st.pop(); 
                else if( sum > 0) num = 0; 
                else if( sum == 0){
                    st.pop(); 
                    num = 0; 
                }
            }

            if( num!= 0) st.push(num); 

        }

        int s = st.size(); 
        vector<int>ans(s); 
        int i = s-1; 

        while(!st.empty()){
            ans[i] = st.top(); 
            st.pop(); 
            i--; 
        }
        return ans;
    }
};