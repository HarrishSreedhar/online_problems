int removeElement(int A[], int n, int elem) {
    int c = 0;
    for (int i = 0; i < n; i++) { 
        if (A[i] == elem) continue;
        else {
            A[c] = A[i];
            c++;
        }
    }
    return c;
}