class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        int l_sum , r_sum ;
        l_sum=0;
        r_sum=sum-nums[0];
        if(l_sum==r_sum)
                return 0;
        for(int i=1;i<nums.size();i++)
        {
            l_sum+=nums[i-1];
            r_sum-=nums[i];
            if(l_sum==r_sum)
                return i;
        }
        
        
        return -1;
    }
};