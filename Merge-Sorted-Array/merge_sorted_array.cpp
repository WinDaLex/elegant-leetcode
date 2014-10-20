class Solution {
    public:
        void merge(int A[], int m, int B[], int n) {
            int i = m - 1, j = n - 1;
            while (i >= 0 && j >= 0) A[i + j + 1] = A[i] > B[j] ? A[i--] : B[j--];
            while (i >= 0) A[i + j + 1] = A[i--];
            while (j >= 0) A[i + j + 1] = B[j--];
        }
};
