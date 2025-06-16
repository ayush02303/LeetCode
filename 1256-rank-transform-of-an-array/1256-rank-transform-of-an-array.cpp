
class Solution {
public:
    // Function to return the rank transformation of an array
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();  // Get the size of the input array
        
        if(n == 0)           // If the array is empty, return an empty vector
            return {};
        
        // Create a set to store unique elements in sorted order
        set<int> uniqueElements(arr.begin(), arr.end());
        
        // Create a hash map (unordered_map) to store the rank of each unique element
        unordered_map<int, int> ranks;
        int rank = 1;  // Rank starts from 1
        
        // Assign ranks to each unique element in the set (smallest element gets rank 1)
        for (const int &ele : uniqueElements)
            ranks[ele] = rank++;  // Increment the rank for the next element
        
        // Create a vector to store the rank transformation of the input array
        vector<int> ans;
        
        // For each element in the input array, find its rank and store it in the result vector
        for (int &ele : arr)
            ans.push_back(ranks[ele]);
        
        return ans;  // Return the rank-transformed array
    }
};
        
