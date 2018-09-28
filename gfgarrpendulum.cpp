#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t, n, l, r;
	cin >> t;
	while (t--) 
	{
		cin >> n;
		int a[n];
		int b[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		if (n % 2 == 0)
		{
			b[(n - 1) / 2] = a[0];
			r = n / 2;
			l = r - 2;
			for (int i = 1; i < n; i++) 
			{
				if (i % 2 == 0)
					b[l--] = a[i];
				else
					b[r++] = a[i];
			}
		}
		else 
		{
			b[n / 2] = a[0];
			r = (n / 2) + 1;
			l = r - 2;
			for (int i = 1; i < n; i++) 
			{
				if (i % 2 == 0)
					b[l--] = a[i];
				else
					b[r++] = a[i];
			}
		}

		for (int i = 0; i < n; i++)
			cout << b[i] << " ";

		cout << "\n";
	}
}