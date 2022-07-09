class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>dict(256,-1);
        int l=0,start=-1;
        for(int i=0;i<s.size();i++)
        {  if(dict[s[i]]>start)
                start=dict[s[i]];
        dict[s[i]]=i;
        l=max(l,i-start);
    }
        return l;
        
        
      
    }
};