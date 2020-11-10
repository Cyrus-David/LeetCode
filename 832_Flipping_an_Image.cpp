vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
int size = A.size(), i, temp;
for (int i = 0; i < size; i++) {
    for (int j = 0; j < size / 2 + (size % 2); j++) {
        temp = !(A[i][j]);
        A[i][j] = !(A[i][size - 1 - j]);
        A[i][size - 1 - j] = temp;
    }
}
return A;
}
