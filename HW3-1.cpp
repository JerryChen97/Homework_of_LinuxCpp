#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::sqrt;

bool IsPrime(long n)
{
	long max = long(sqrt(n));
	long i = 1;
	long res;
	while (true)
	{
		res = n % (++i);
		if ( res == 0 )
		{
			return false;
		}
		if ( i == max )
		{
			break;
		}
	}
	return true;
}
int main()
{
	long n;
	cout << "请输入需要判断的整数：";
	cin >> n;
	if ( IsPrime(n) )
	{
		cout << n << "是质数";
	}
	else
	{
		cout << n << "不是质数";
	}
	cout << endl;
	return 0;
}
