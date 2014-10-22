class Solution {
    public:
        int removeElement(int A[], int n, int elem) {
            for (int i = 0; i < n; i++) {
                while (i < n && A[i] == elem) {
                    swap(A[i], A[--n]);
                }
            }
            return n;
        }
};
