class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
    /*unordered_set<int> uniq(nums.begin(), nums.end());
    vector<pair<int,int>> freq; 
    
    for (int x : uniq) {
        int cnt = 0;
        for (int y : nums) if (y == x) cnt++;
        freq.push_back({cnt, x});
    }
    
    sort(freq.rbegin(), freq.rend()); 
    
    vector<int> result;
    for (int i = 0; i < k; i++) result.push_back(freq[i].second);
    return result;*/

    
    unordered_map<int,int> freq;
    for (int x : nums) freq[x]++;

    
    vector<vector<int>> bucket(nums.size() + 1);
    for (auto &p : freq) {
        bucket[p.second].push_back(p.first);
    }

    vector<int> result;
    for (int i = bucket.size() - 1; i >= 0 && result.size() < k; i--) {
        for (int num : bucket[i]) {
            result.push_back(num);
            if (result.size() == k) break;
        }
    }
          return result;
          
}
    };