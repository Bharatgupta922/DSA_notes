// 1. Two Sum
// first we will make a map 
// then we will check if target - currElement is in map 
// if it is then return index mp[target-currElement] , index current
// else store mp[currElement - > i] in map

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
            vector<int> ans(2,0) ;
        for(int i = 0  ; i < nums.size() ; ++i){
            if(mp.find(target-nums[i])!=mp.end()){
                ans[0] = mp[target-nums[i]];
                ans[1] = i;
                return ans;
            }
            else mp[nums[i]] = i;
        }
        return ans;
    }
};