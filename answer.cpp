#include <bits/stdc++.h>
using namespace std;

int number(vector<int> &a, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum * 10 + a[i];
    }
    return sum;
}

vector<int> findArraySum(vector<int> &a, size_t n, vector<int> &b, size_t m) {
    vector<int> v(max(n, m) + 1);
    int c = number(a, n);
    int d = number(b, m);
    int ans = c + d;
    size_t i = 0;
    while (ans > 0) {
        int r = ans % 10;
        v[i] = r;
        ans = ans / 10;
        i++;
    }
    v.resize(i);
    reverse(v.begin(), v.end());
    return v;
}

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {9, 8, 7};
    vector<int> c = findArraySum(a, a.size(), b, b.size());
    for (int i = 0; i < c.size(); i++) {
        cout << c[i];
    }
    cout << endl;
    return 0;
}
