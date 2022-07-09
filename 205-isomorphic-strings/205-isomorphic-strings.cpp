class Solution {
public:
    bool isIsomorphic(string s, string t) {
       unordered_map<char,char> c2c;
       unordered_map<char,bool> ispresent ;
       int n=s.size();
       for(int i=0;i<n;i++){
           if(!c2c[s[i]]){
               if(!ispresent[t[i]]){
                   c2c[s[i]]=t[i];
                   ispresent[t[i]]=true;
                   
               }
                else
                    return false;
            
           }
           else if(c2c[s[i]]!=t[i])
               return false;
        
       }
        
        return true;
    }
};