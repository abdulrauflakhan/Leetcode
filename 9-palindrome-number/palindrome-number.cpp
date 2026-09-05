class Solution {
public:
    bool isPalindrome(int x) {
        int num=x;
        long long reversed=0;
        while(x>0){
           int n= x%10;
            reversed=(reversed*10)+n;
            x=x/10;
        }
        if(reversed==num){
            return true;
        }
        else{
            return false;
        }
        
    }
};