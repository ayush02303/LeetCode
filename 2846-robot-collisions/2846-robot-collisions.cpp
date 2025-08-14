class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();
        vector<int> idx(n);
        iota(idx.begin(), idx.end(), 0); // store indices
        
        // Sort by position
        sort(idx.begin(), idx.end(), [&](int a, int b) {
            return positions[a] < positions[b];
        });
        
        stack<int> st; // store indices of robots moving right
        vector<bool> alive(n, true);

        for (int id : idx) {
            if (directions[id] == 'R') {
                st.push(id);
            } else { // moving left
                while (!st.empty() && directions[st.top()] == 'R' && alive[id]) {
                    if (healths[st.top()] < healths[id]) {
                        alive[st.top()] = false; // destroy right-moving robot
                        healths[id] -= 1;       // lose 1 health
                        st.pop();
                    } else if (healths[st.top()] > healths[id]) {
                        alive[id] = false;      // destroy left-moving robot
                        healths[st.top()] -= 1; // lose 1 health
                    } else { // equal health
                        alive[id] = false;
                        alive[st.top()] = false;
                        st.pop();
                    }
                }
            }
        }
        
        // Collect results in original order
        vector<int> res;
        for (int i = 0; i < n; i++) {
            if (alive[i]) res.push_back(healths[i]);
        }
        return res;
    }
};
