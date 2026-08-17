class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
    /*for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {};*/
        map<int, int> mpp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int num = nums[i];
            int needed = target - num;
            if(mpp.find(needed) != mpp.end()){
                return {mpp[needed], i};
            }
            mpp[num] = i;
        }
        return {};
}
    };
