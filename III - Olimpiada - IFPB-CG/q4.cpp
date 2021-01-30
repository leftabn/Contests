// URI - 2472

#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int l, n;
    cin >> l >> n;
    long long int last = l - (n - 1);
    cout << (n - 1) + last * last << "\n"; 

    return 0;
}