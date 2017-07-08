#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	long I[10], sum = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << "Integer " << i + 1 << ": ";
		cin >> I[i];
		cout << endl;
		sum += I[i];
	}
	cout << sum << endl;
	return 0;
}