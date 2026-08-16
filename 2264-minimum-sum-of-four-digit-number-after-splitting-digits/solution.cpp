class Solution {
public:
    int minimumSum(int num) {
        int ones=num%10;
        num/=10;
        int tens=num%10;
        num/=10;
        int hund=num%10;
        num/=10;
        int thous=num%10;
        vector<int>v(4);
        v[0]=ones;
        v[1]=tens;
        v[2]=hund;
        v[3]=thous;
        sort(v.begin(),v.end());
        int num1=v[0];
        num1=num1*10+v[2];
        int num2=v[1];
        num2=num2*10+v[3];
        return num1+num2;
    }
};
