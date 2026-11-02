class Solution {
public:
    bool isPalindrome(int x) {
        long long r=0;
        int original=x;
        if(x<0){
           return false;}
        while(x!=0){
            int digit=x%10;
            r=r*10+digit;
            x=x/10;
        }
        cout<<r;
        if(original==r){
            return true; 
        }
    return 0;
    }
};