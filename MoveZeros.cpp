class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //METHOD 1
        int n = nums.size();
        int count = 0;
        vector<int> newarr;
        for(int i = 0; i<n; i++){
            if(nums[i] != 0){
                newarr.push_back(nums[i]);
            }
            else{
                count++;
            }
        }
        for(int j = 0; j<count; j++){
             newarr.push_back(0);
        }
        nums = newarr;
        //METHOD 2
        int n = nums.size();
        int count = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] != 0){
                nums[count++] = nums[i];
            }
        }
        while(count<n){
            nums[count++] = 0;
        }
    }
};