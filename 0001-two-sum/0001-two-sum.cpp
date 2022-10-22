class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>sol;
        int temp;
        for(int i=0;i<nums.size()-1;i++){
            temp=target-nums[i];
            for(int j=i+1;j<nums.size();j++)
                if(temp==nums[j]){
                    sol.push_back(i);
                    sol.push_back(j);
                    
                    return sol;
                }
        }
        return sol;
    }
};