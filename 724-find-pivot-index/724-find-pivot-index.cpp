class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum=0,rsum=0;
        for(int i=1;i<nums.size();i++)
            rsum+=nums[i];
      
        if(nums.size()==1)
            return 0;
        if(rsum==0)
            return 0;
       
        for(int i=1;i<nums.size();i++){
            lsum+=nums[i-1];
            rsum=rsum-nums[i];
           
            if(rsum==lsum)
                
            {
             return i;
          
            
        }
           
    }
        return -1;
    }
};