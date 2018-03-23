#include <iostream>
#include <cmath>
using namespace std;

//A. Feed the cat(http://codeforces.com/contest/955/problem/A)
int main() {
	double hh, mm, h, h2, d, c, n;
	double a, a2;

	cin >> hh >> mm >> h >> d >> c >> n;

	a = ceil(h /n) * c;
	if (hh < 20) {
		h2 = h+ ((20 - hh) * 60 - mm)*d;
		a2 = ceil(h2 / n) * c*0.8;
		a= (a < a2) ? a : a2;
	}
	else if (hh >= 20) {
		a = a * 0.8;
	}
	cout.precision(4);
	cout << fixed << a;

	return 0;
}
