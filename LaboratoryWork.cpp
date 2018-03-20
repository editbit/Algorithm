#include <iostream>

using namespace std;

//C. Laboratory Work (http://codeforces.com/contest/931/problem/C)
int main() {
	int n, *x, *y, avg=0, min, max, a=0, b=0, c=0, i;

	cin >> n;
	x = new int[n];
	y = new int[n];

	cin >> x[0];
	min = max = x[0];
	for (i = 1; i < n; i++) {
		cin >> x[i];
		avg += x[i];
		min = (min > x[i])?x[i]:min;
		max = (max < x[i])?x[i]:max;
	}

	if (max - min <= 1) {
		cout << n << endl;

		for (i = 0; i < n; i++) {
			cout << x[i];
			if (i != n - 1)
				cout << ' ';
		}
	}
	else {
		for (i = 0; i < n; i++) {
			if (x[i] == min)
				a++;
			else if (x[i] == max)
				c++;
			else b++;
		}
		int temp = (a < c) ? a : c;
		if (b/2 < temp) {
			a = a - temp;
			c = c - temp;
			b = n - a - c;

			temp = n - 2 * temp;
		}
		else {
			temp = n - 2 * (b / 2);

			a = a + b / 2;
			c = c + b / 2;
			b = n - a - c;
		}

		for (i = 0; i < a; i++)
			y[i] = min;
		for (; i < a+b; i++)
			y[i] = min+1;
		for (; i < a+b+c; i++)
			y[i] = min+2;

		cout << temp << endl;

		for (int i = 0; i < n; i++) {
			cout << y[i];
			if (i != n - 1)
				cout << ' ';
		}

	}

	return 0;
}
