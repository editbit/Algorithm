#include <iostream>

using namespace std;

//D. Peculiar apple-tree (http://codeforces.com/contest/931/problem/D)
//Time limit exceeded on test 13
int main() {
	int n, *x, *ap, i, total = 0;
	bool ch = false;

	cin >> n;
	x = new int[n];
	ap = new int[n];
	ap[0] = 1;
	for (i = 1; i < n; i++) {
		cin >> x[i];
		ap[i] = 1;
	}

	while (true) {
		if (ap[0] == 1) {
			total++;
			ap[0] = 0;
		}

		for (i = 1; i < n; i++) {
			if (ap[i] != 0) {
				ap[i] = 0;
				ap[x[i]-1]++;
				ch = true;
			}
		}
		if (!ch)
			break;
		ch = false;
		for (i = 0; i < n; i++) {
			ap[i] = (ap[i] % 2 == 0) ? 0 : 1;
		}
	}

	cout << total;

	delete(x);

	//system("pause");

	return 0;
}
