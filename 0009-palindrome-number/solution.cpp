class Solution {
public:
    bool isPalindrome(int x) {
        unsigned long long temp, digit,reverse=0;
        temp=x;
        if (x<0) return 0;
        while(temp!=0){
            digit=temp%10;
            reverse=reverse*10+digit;
            temp/=10;
        }
        if(reverse==x) return 1;
        else return 0;
    }
};
