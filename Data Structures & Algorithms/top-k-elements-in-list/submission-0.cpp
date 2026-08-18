class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
    unordered_set<int> uniq(nums.begin(), nums.end());
    vector<pair<int,int>> freq; 
    
    for (int x : uniq) {
        int cnt = 0;
        for (int y : nums) if (y == x) cnt++;
        freq.push_back({cnt, x});
    }
    
    sort(freq.rbegin(), freq.rend()); 
    
    vector<int> result;
    for (int i = 0; i < k; i++) result.push_back(freq[i].second);
    return result;
}
    };
