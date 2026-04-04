class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr(n, vector<int>(n));

        int count = 0, k = 1;
        int tne = n * n;

        int minr = 0, minc = 0;
        int maxr = n - 1, maxc = n - 1;

        while (minr <= maxr && minc <= maxc) {

            // right
            for (int j = minc; j <= maxc && count < tne; j++) {
                arr[minr][j] = k++;
                count++;
            }
            minr++;

            // down
            for (int i = minr; i <= maxr && count < tne; i++) {
                arr[i][maxc] = k++;
                count++;
            }
            maxc--;

            // left
            for (int j = maxc; j >= minc && count < tne; j--) {
                arr[maxr][j] = k++;
                count++;
            }
            maxr--;

            // up
            for (int i = maxr; i >= minr && count < tne; i--) {
                arr[i][minc] = k++;
                count++;
            }
            minc++;
        }

        return arr;
    }
};
