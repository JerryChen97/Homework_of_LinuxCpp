#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <strstream>

using namespace std;

long p0[1] = {2};
vector<long> prime(p0, p0 + 1);
vector<long> factor;
long m = 0;
long N;

bool test(long n)
{
	long length = m;
	for (int i = 0; i < prime.size(); i++)
	{
		if (n % prime[i] == 0)
		{
			return 0;
		}
	}
	return 1;
}

void get_prime(long max)
{
	long length = max;
	for (long i = 2; i < length; i++)
	{
		if (test(i))
		{
			prime.insert(prime.end(),i);
			m++;
		}
	}
}

/* 这是重新考虑原来算法的时间复杂度
	以及浪费掉的信息之后重新设计的算法，速度显著提高 */
void faster_decompos(long n)
{
	string result, temp;
	strstream temps;
	long start_p = 2;
	long MAX = long(sqrt(n)) + 1;
	bool *index = new bool[MAX];
	for (int i = 0; i < MAX; i++)
	{
		index[i] = 1;
	}
	result = "n=";
	for (long p = start_p; p <= MAX; p++)
	{
		if (index[p])
		{
			temps.clear();
			temps << p;
			temps >> temp;
			while (n % p == 0)
			{
				n /= p;
				if (n > 1)
				{
					result += temp;
					result += '*';
				}
				else
				{
					result += temp;
				}
			}
			for (long i = p; i < MAX; i += p)
			{
				if (index[i])
				{
					index[i] = 0;
				}
			}
		}
	}
	if (n != 1)
	{
		temps.clear();
		temps << n;
		temps >> temp;
		result += temp;
//		cout << n;
	}
	result += '\n';
	cout << result;
//	cout << endl;
}
int main()
{
	cin >> N;
	faster_decompos(N);
	return 0;
}