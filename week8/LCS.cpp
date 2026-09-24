#include <bits/stdc++.h>
using namespace std;
 
int lcs(string &A, string &B) {
    int m = A.size(), n = B.size();
    vector<vector<int>> r(m + 1, vector<int>(n + 1, 0));
 
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (A[i - 1] == B[j - 1]) {
                r[i][j] = 1 + r[i - 1][j - 1];
            } else {
                r[i][j] = max(r[i - 1][j], r[i][j - 1]);
            }
        }
    }
    return r[m][n];
}
 
int main() {
    string A, B;
    cout << "Enter first string: ";
    cin >> A;
    cout << "Enter second string: ";
    cin >> B;
 
    cout << "Length of LCS: " << lcs(A, B) << endl;
 /*Enter first string: abcd
Enter second string: aebd
Length of LCS: 3*/
    return 0;
}

