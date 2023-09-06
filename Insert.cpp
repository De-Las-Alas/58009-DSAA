#include <iostream>
using namespace std;
int* insert(int n, int arr[], int x, int pos)
{
	int y;
	n++;
	for (y = n; y >= pos; y--)
		arr[y] = arr[y - 1];
	arr[pos - 1] = x;

	return arr;
}
int main()
{
	int arr[100] = { 0 };
	int y, x, pos, n = 10;
	for (y = 0; y < 10; y++)
		arr[y] = y + 1;
    cout<<"\nThe Current Array is:\n";
	for (y = 0; y < n; y++)
		cout << arr[y] << " ";
	cout << endl;
    cout<<"\n\nEnter Element to Insert: ";
    cin>>x;
	pos = 2;
	insert(n, arr, x, pos);
    cout<<"\n\nThe New Array is:\n";
	for (y = 0; y < n + 1; y++)
		cout << arr[y] << " ";
	cout << endl;

	return 0;
}