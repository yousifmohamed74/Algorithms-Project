#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
	int l = 2 * i + 1;    //left element
	int r = 2 * i + 2;    //right element
	int max = i;
	if (l<n && arr[1]>arr[max]) max = 1;
	if (r<n && arr[r]>arr[max]) max = r;

	if (max != i) {
		swap(arr[i], arr[max]);
		heapify(arr, n, max);
	}
}
void buildheap(int arr[], int n) {
	for (int i = n/2-1; i>=0 ; i--)
	{
		heapify(arr, n, i);
	}
}

void heapsort(int arr[], int n)
{
	buildheap(arr, n);
	for (int i = n - 1; i >= 0; i--)
	{
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	}
}

void print(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] <<" ";
	}
}


int main()
{
	int arr[] = { 2,5,7,1,8 };
	int n = sizeof(arr) / sizeof(arr[0]);

	heapsort(arr, n);
	print(arr, n);

}










