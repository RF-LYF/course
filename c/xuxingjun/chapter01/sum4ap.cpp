#include <iostream>
using namespace std;

int main()
{
	char flag = 'y';
	while ('y' == flag) {
		cout << "Enter one number n(n >= 0)" << endl;
		int sum = 0, n = 0, start = 1;
		cin >> n;
		while (start <= n) {
			sum += start;
			start++;
		}
		cout << "the sum from 1 to " << n << " is : " << sum << endl;
		while (true) {
			cout << "continue(y/N)?" << endl;
			cin >> flag;
			if ('y' == flag) {
				break;
			} else if ('N' == flag) {
				return 0;
			} else {
				continue;
			}
		}
	}
	return 0;
}