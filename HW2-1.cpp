#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;

/* �������Ϊlength�������ո� */
void print_blank( long length )
{
	for (int i = 0; i < length; i++)
	{
		cout << ' ';
	}
}
/* �������Ϊlength�������Ǻ� */
void print_star( long length )
{
	for (int i = 0; i < length; i++)
	{
		cout << '*';
	}
}
int main()
{
	/* nΪ��ӡ������mΪ�м����ո��ַ��� */
	long n, m;
	cout << "�����ӡ����n��";
	cin >> n;
	cout << "�����м����ո��ַ���m��";
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