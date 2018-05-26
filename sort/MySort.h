#pragma once


class MySort {
	private:
		static void swap(int &a, int&b);

		static void merge(int *s, int l, int m, int h);	// mergesort
		static int partition(int *s, int l, int h);		// quicksort

	public:
		static void mergeSort(int *s, int l, int h);	// O(n log n) O(n log n) O(n log n)
		static void quickSort(int *s, int l, int h);	// O(n log n) O(n log n) O(n^2)
		static void bubbleSort(int *s, int n);			// O(n^2)


};