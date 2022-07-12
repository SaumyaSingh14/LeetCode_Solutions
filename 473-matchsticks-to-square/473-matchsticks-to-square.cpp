class Solution {
public:
    
        bool happened(vector<int> sides,int pos){
        for(int i=0;i<pos;i++){
            if(sides[i]==sides[pos])
                return true;
        }
        return false;
    }
    
    bool recurse(vector<int> sides,int pos,int target,vector<int> v){
       
        if(pos==v.size())
            return sides[0]==target and sides[1]==target and sides[2]==target and sides[3]==target;
 
        for(int i=0;i<4;i++){
            if(sides[i]+v[pos]>target or happened(sides,i))
                continue;
            sides[i]+=v[pos];
            if(recurse(sides,pos+1,target,v))
                return true;
            sides[i]-=v[pos];
        }
        return false;
    }
    bool makesquare(vector<int>& sticks) {
        
        int sum = accumulate(sticks.begin(),sticks.end(),0);
 
        sort(sticks.rbegin(),sticks.rend());
        vector<int> sides(4,0);
        if(sum%4 or sticks.size()<4)
            return false;
        sum/=4;
 
        if(sticks[0]>sum)
            return false;
 
        // recurse to find out if there exists any optimal square?
        return recurse(sides,0,sum,sticks);
    }
};