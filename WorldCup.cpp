#include <iostream>
#include <math.h>

//B. World Cup (http://codeforces.com/contest/931/problem/B)
int main() {
	int n, a, b, min=1, max, middle, total=0, i=0;
	
	std::cin >> n >> a >> b;

	while (pow(2, total) != n) total++;
	max = n;
	middle = n / 2;
	while (true) {
		if ((a > middle && b <= middle) || (a <= middle && b > middle)) {
			i = total - i;
			break;
		}
		(a <= middle) ? max=middle : min=middle+1;
		middle = min + (max - min) / 2;
		i++;
	}
	(total == i) ? std::cout << "Final!" : std::cout << i;
	
	return 0;
}
