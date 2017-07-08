#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;

/* 输出长度为length的连续空格 */
void print_blank( long length )
{
	for (int i = 0; i < length; i++)
	{
		cout << ' ';
	}
}
/* 输出长度为length的连续星号 */
void print_star( long length )
{
	for (int i = 0; i < length; i++)
	{
		cout << '*';
	}
}
int main()
{
	/* n为打印行数；m为中间间隔空格字符数 */
	long n, m;
	cout << "输入打印行数n：";
	cin >> n;
	cout << "输入中间间隔空格字符数m：";
	cin >> m;
	for (long i = 0; i < n; i++)
	{
		print_blank( n - i - 1 );
		print_star( 2 * i + 1 );
		print_blank(m);
		print_star( 2 * ( n - i - 1 ) + 1 );
		cout << '\n';
	}
	return 0;
}