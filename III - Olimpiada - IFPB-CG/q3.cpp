// URI - 2407

#include <bits/stdc++.h>

#define MAX 1003

using namespace std;

long int quad[MAX][MAX];

long int arrL[MAX];
long int arrC[MAX];

long int arrP[MAX * MAX];

int main()
{
	memset(arrL, 0, sizeof(arrL));
	memset(arrC, 0, sizeof(arrC));
	memset(arrP, 0, sizeof(arrP));
	long int sum;
	long int sumD = 0;
	long int n;
	cin >> n;
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> quad[i][j];
			arrP[quad[i][j]]++;
		}
	}
	for (i = 1; i <= (n * n); i++)
	{
		if (arrP[i] != 1)
		{
			cout << 0 << "\n";
			return 0;
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
				sumD += quad[i][j];
			arrL[j] += quad[i][j];
			arrC[i] += quad[i][j];
		}
	}

	for (i = 0; i < n; i++)
	{
		if ((arrL[i] != arrC[i]) || (arrL[i] != sumD) || (arrC[i] != sumD))
		{
			cout << 0 << "\n";
			return 0;
		}
	}
	cout << sumD << "\n";
	return 0;
}