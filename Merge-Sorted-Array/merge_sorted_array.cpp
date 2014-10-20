class Solution {
    public:
        void merge(int A[], int m, int B[], int n) {
            while (m > 0 && n > 0) A[m + n - 1] = A[m - 1] > B[n - 1] ? A[--m] : B[--n];
            while (m > 0) A[m + n - 1] = A[--m];
            while (n > 0) A[m + n - 1] = B[--n];
        }
};
