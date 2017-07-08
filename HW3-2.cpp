#include <iostream>

using std::cout;
using std::cin;
using std::endl;

long gcd( long i1, long i2 )
{
	if (i1 < i2)
	{
		return gcd( i2, i1 );
	}
	long res = i1 % i2;
	if ( res == 0 )
	{
		return i2;
	}
	else
	{
		return gcd(i2, res);
	}
}
long lcm(long i1, long i2, long gcd)
{
	return i1 * i2 / gcd;
}

int main()
{
	long n1, n2;
start:
	cout << "��������Ҫ������������������м��ÿո������";
	cin >> n1 >> n2;
	if (n1 <= 0 || n2 <= 0)
	{
		cout << "�����ʽ���󣡣���" << endl;
		goto start;
	}
	long g = gcd(n1, n2);
	cout << "���Լ����" << g << endl << "��С��������" << lcm(n1, n2, g) << endl;
	return 0;
}