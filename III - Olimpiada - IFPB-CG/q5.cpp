// URI - 2590

#include <bits/stdc++.h>

using namespace std;
int main() {
    long long int arr[] = {1, 7, 9, 3};
    long long int n, v;
    scanf("%lld", &n);
    while (n--) {
        scanf("%lld", &v);
        printf("%lld\n", arr[v % 4]);
    }
    return 0;
}