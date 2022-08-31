class Solution {
public:
    bool isPalindrome(int x) {
        long int num=x,temp=0,y=0;
        
        
        if(num<0)
            return false;
        
      do{
          temp=x%10;
          y=y*10+temp;
          x=x/10;
          } while(x!=0);
        
        if(y==num)
            return true;
        
        return false;
    }
};