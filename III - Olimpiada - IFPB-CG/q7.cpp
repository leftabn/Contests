// URI - 3077

#include <bits/stdc++.h>

const int MAX = (1e6) + 2;

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int q[MAX];
	int t[MAX];
	int i, v, j, sum = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &q[i]);
		sum += q[i];
		t[i] = 0;
	}
	int div = (k/n);
	int maxPenum = div*sum;
	for (i = 0; i < n; i++) {
		t[i] += maxPenum;
	}
	for (i = n*div; i < k; i++) {
		for (j = 0; j < n; j++) {
			t[(j+i)%n] += q[j];
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", t[i]);
		if (i < (n - 1))
			printf(" ");
	}
	printf("\n");
	return 0;
}
