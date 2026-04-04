class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>v;
        for(int i=0; i<=rowIndex;i++){
            long long num=1;
            vector<int>v1;
            for(int j=0;j<=i;j++){
                v1.push_back(num);
                num=num*(i-j)/(j+1);
            }
            v.push_back(v1);
        }
        return v[rowIndex];
    }
};
