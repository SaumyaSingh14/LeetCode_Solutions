class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
       vector<int>minReach;
        for(int i=0;i<dist.size();i++)
        {
            minReach.push_back((int)ceil((double)dist[i]/(double)speed[i]));  
        }
       
        sort(minReach.begin(),minReach.end());
        int ans=0,time=0;
        for(int k=0;k<minReach.size();k++){
            if(minReach[k]>time)
                ans++;
            else break;
             time++;
        }
        
        return ans;
    }
};