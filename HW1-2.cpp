#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::ios;

int main()
{
	//principal and rate
	double prin, rate;

	cout << "һ���ڶ��ڴ���";
	cin >> prin;
	cout << endl << "��������ʣ�";
	cin >> rate;
	cout.precision(2);
	cout.setf( ios::fixed, ios::floatfield );
	cout << "һ�������󱾽�����Ϣ�ܶ" << prin * ( 1 + rate * 0.01 ) << endl;
	return 0;
}