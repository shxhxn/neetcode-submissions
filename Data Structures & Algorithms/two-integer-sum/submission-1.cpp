class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int a = 0;

        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }
                else {
                    a = a + 1;
                }
            }
        }

        if (a != 0){
            return {};
        }

        return {};
    }
};