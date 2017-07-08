#include <iostream>
#include <iomanip>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::string;
using std::resetiosflags;
using std::ios;

/* 打印分割线 */
void print_minus()
{
	cout << "--------------------------" << endl;
}
/* 将数字转换为星期 */
string numtoweek( int num )
{
	switch (num)
	{
	case 0:
		return "Su";
	case 1:
		return "Mo";
	case 2:
		return "Tu";
	case 3:
		return "We";
	case 4:
		return "Th";
	case 5:
		return "Fr";
	case 6:
		return "Sa";
	default:
		break;
	}
	return " ";
}
/* 打印星期标题 */
void print_week()
{
	for (int i = 0; i < 7; i++)
	{
		if ( i == 0 )
		{
			cout << resetiosflags(ios::showbase) << numtoweek(i);
		}
		else
		{
			cout << setw(4) << numtoweek(i);
		}
	}
	cout << endl;
}
/* 打印日期区 */
void print_days( int days, int start )
{
	int i = 1, length = 7;
	bool begin = 0;
	while (true)
	{
		for (int j = 0; j < length; j++)
		{
			if (!begin)
			{
				if ( j == start )
				{
					begin = 1;
				}
			}
			if ( j == 0 )
			{
				if ( !begin || i > days )
				{
					cout << setw(2) << ' ';
				}
				else
				{
					cout << setw(2) << i++;
				}
			}
			else
			{
				if ( !begin || i > days )
				{
					cout << setw(4) << ' ';
				}
				else
				{
					cout << setw(4) << i++;
				}
			}
		}
		cout << endl;
		if (i > days)
		{
			break;
		}
	}
}
int main()
{
	cout << "Calendar 2016-01\n";
	print_minus();
	print_week();
	print_minus();
	print_days(31, 5);
	print_minus();
	return 0;
}