#include <iostream>

using namespace std;

long recursive_C(long n, long k)
{
	if (n >= k)
	{
		if (n == 1)
		{
			return 1;
		}
		if (k == 0)	
		{
			return 1;
		}
		return recursive_C(n - 1, k) + recursive_C(n - 1, k - 1);
	}
	return 0;
}

long loop_C(long n, long k)
{
	long accum1, accum2, accum3;
	accum1 = accum2 = accum3 = 1;
	for (int i = 0; i < n; i++)
	{
		accum1 *= (i + 1);
		if (i < k)
		{
			accum2 *= (i + 1);
		}
		if (i < n - k)
		{
			accum3 *= (i + 1);
		}
	}
	return accum1 / (accum2 * accum3);
}

int main()
{
	cout << "Please enter the n and k, satisfying n is not less than k: ";
	long n, k;
	cin >> n >> k;
	cout << "\nThe Recursive Algorithm: " << recursive_C(n, k);
	cout << "\nThe Loop Algorithm: " << loop_C(n, k);
	cout << endl;
	return 0;
}