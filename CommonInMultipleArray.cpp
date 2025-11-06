#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int arr[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    set<int> set1;
    for (int j = 0; j < n; j++) {
        set1.insert(arr[0][j]);
    }

    for (int i = 1; i < m; i++) {
        set<int> set2;
        for (int j = 0; j < n; j++) {
            set2.insert(arr[i][j]);
        }

        set<int> result;
        set_intersection(set1.begin(), set1.end(),set2.begin(), set2.end(),inserter(result, result.begin()));

        set1 = result; 
    }
    for(int i:set1) cout<<i<<" ";
}
