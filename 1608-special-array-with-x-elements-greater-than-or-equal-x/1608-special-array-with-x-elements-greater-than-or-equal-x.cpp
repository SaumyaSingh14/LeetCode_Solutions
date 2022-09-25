class Solution {
public:
    int specialArray(vector<int>& nums) {
        vector<int>array(1001);
        for(int i: nums){
            array[i]++;
        }
        int total=nums.size();
        for(int j=0;j<1001;j++){
             if(j==total)
                 return j;
            total-=array[j];
         
            
    }
        return -1;
        
    }
};