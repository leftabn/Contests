// URI - 3059

#include <bits/stdc++.h>

#define MAX 2002

using namespace std;

int main() {
    int arr[MAX];
    int n, l, f;
    scanf("%d %d %d", &n, &l, &f);
    int k;
    for (k = 0; k < n; k++)
        cin >> arr[k];
    int c = 0;
    int i, j;
    for (i=0; i<n; i++)  {
        for (j=i+1;j<n; j++) {
            if (arr[i] != arr[j]) {
                if (arr[i] + arr[j] >= l && arr[i] + arr[j] <= f) {
                    c++;
                }
            }
        }
    }
    printf("%d\n", c);
    return 0;
}