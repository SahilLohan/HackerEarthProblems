// Link : https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/xor-pairs-4-ae23b208/


// Code :

#include <bits/stdc++.h>



using namespace std;



inline void solve() {

    int n;

    cin >> n;

    map <int, long long int> freq;

    long long int ans = 0;

    for (int i = 1, x; i <= n; ++i) {

        cin >> x;

        int val = x ^ i;

        ans += freq[val];

        ++freq[val];

    }

    cout << ans << '\n';

}



int main() {

    int tests = 1;

    cin >> tests;

    for (int _ = 0; _ < tests; ++_) {

        solve();

    }

}
