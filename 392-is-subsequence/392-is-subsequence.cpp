class Solution {
public:
    bool isSubsequence(string s, string t) {
        int flag, pos=0;
     for(int i=0;i<s.size();i++)
     {   flag=1;
         for(int j=pos;j<t.size() ;j++)
         { if(s[i]==t[j])
             { flag=0;
              pos=j+1;
             break;}}
         if(flag==1)
             return false;
         
              
                 
       } 
    return true;
    }
};