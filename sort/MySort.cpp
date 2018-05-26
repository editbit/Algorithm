#include "MySort.h"

void MySort::swap(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void MySort::merge(int *s, int l, int m, int h) {
	int *u = new int[h - l + 1];
	int i = l, j = m + 1, k = 0;

	while (i <= m && j <= h) {
		// u[k++] = (s[i]<s[j])?s[i++]:s[j++];
		if (s[i] < s[j]) {
			u[k] = s[i];
			i++;
		}
		else {
			u[k] = s[j];
			j++;
		}
		k++;
	}
	if (i > m) {
		for (; j <= h; j++, k++) u[k] = s[j];
	}
	else {
		for (; i <= m; i++, k++) u[k] = s[i];
	}

	for (i = l, k = 0; i <= h; i++, k++)	s[i] = u[k];

	delete[] u;
}

void MySort::mergeSort(int *s, int l, int h) {
	int m;

	if (l < h) {
		m = (h + l) / 2;
		mergeSort(s, l, m);
		mergeSort(s, m + 1, h);
		merge(s, l, m, h);
	}
}


void MySort::quickSort(int *s, int l, int h) {
	int p = l;

	if (l < h) {
		p = partition(s, l, h);
		quickSort(s, l, p-1);
		quickSort(s, p+1, h);
	}


}

int MySort::partition(int *s, int l, int h) {
	int p = l;
	for (int i = l+1; i <= h; ++i) {
		if (s[i] < s[l]) {
			++p;
			swap(s[i], s[p]);
		}
	}
	swap(s[l], s[p]);

	return p;
}


void MySort::bubbleSort(int *s, int n) {
	int temp;

	for (int i = 0; i < n-1; ++i) {
		for (int j = 1; j < n-i-1; ++j) {
			if (s[j] > s[j + 1]) {
				swap(s[j], s[j+1]);
			}
		}
	}
}