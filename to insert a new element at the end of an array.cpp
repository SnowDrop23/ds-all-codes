//Insert new element at the end of an array
#include <iostream>
using namespace std;
int main()
{
	int n, value;
	cout << "Enter size of an array: ";
	cin >> n;
	int arr[n+1];
	cout << "Enter array elements: ";
	for(int i = 0; i < n; i++) cin >> arr[i];
	cout << "Enter the new: ";
	cin >> value;
	arr[n] = value;
	n++;
	cout << "After insertion: ";
	for(int i = 0; i < n; i++) cout << arr[i] << " ";


} 
