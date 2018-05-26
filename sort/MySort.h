#pragma once


class MySort {
	private:
		static void swap(int &a, int&b);

		static void merge(int *s, int l, int m, int h);	// mergesort
		static int partition(int *s, int l, int h);		// quicksort

	public:
		static void mergesort(int *s, int l, int h);	// O(n log n) O(n log n) O(n log n)
		static void quicksort(int *s, int l, int h);	// O(n log n) O(n log n) O(n^2)
};