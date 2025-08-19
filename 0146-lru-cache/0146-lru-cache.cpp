class LRUCache {
public:
    int cap;
    list<pair<int,int>> dll; // {key, value}
    unordered_map<int, list<pair<int,int>>::iterator> mp; 
    
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        if(mp.find(key) == mp.end()) return -1; 
        
        // Move accessed node to front
        auto it = mp[key];
        int value = it->second;
        
        dll.erase(it);
        dll.push_front({key, value});
        mp[key] = dll.begin();
        
        return value;
    }
    
    void put(int key, int value) {
        if(mp.find(key) != mp.end()) {
            // Remove old entry
            dll.erase(mp[key]);
        }
        else if(dll.size() == cap) {
            // Remove least recently used
            auto last = dll.back();
            mp.erase(last.first);
            dll.pop_back();
        }
        
        // Insert new node at front
        dll.push_front({key, value});
        mp[key] = dll.begin();
    }
};
