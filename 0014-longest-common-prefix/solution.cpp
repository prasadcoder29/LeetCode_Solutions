class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string first=strs[0];
        string second=strs[n-1];
        if(n==1) return strs[0];
        for(int i=0;i<min(first.length(),second.length());i++){
            if(first[i]==second[i]){
                s+=first[i];
            }
            else return s;
        }
        return s;
    }
};
