class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //METHOD1
        int n = nums.size();
        unordered_map<int, int> map1;
        //auto ::i;
        for(int i = 0; i<n; i++){
            map1[nums[i]]++;
        }
        for(auto j : map1){
            if(j.second == 1){
                return j.first;
            }
        }
        //METHOD2
        int ans = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            ans = ans^nums[i];
        }
        return ans;
    }
};