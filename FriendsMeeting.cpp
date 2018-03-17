#include <iostream>
using namespace::std;

//A.Friends Meeting (http://codeforces.com/contest/931/problem/A)
int main() {
	int a, b, c=0, i;

	cin >> a >> b;

	c = 0;
	for (i = 0; i < abs(a - b) / 2; i++) {
		c += i + 1;
	}
	c *= 2;
	c += (abs(a-b)%2 == 0)?0:i + 1;

	cout << c;

	return 0;
}