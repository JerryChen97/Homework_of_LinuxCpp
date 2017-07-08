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

	cout << "一年期定期存款金额：";
	cin >> prin;
	cout << endl << "存款年利率：";
	cin >> rate;
	cout.precision(2);
	cout.setf( ios::fixed, ios::floatfield );
	cout << "一年期满后本金与利息总额：" << prin * ( 1 + rate * 0.01 ) << endl;
	return 0;
}