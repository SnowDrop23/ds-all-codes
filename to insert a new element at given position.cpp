//insert a new element at given position
#include <iostream>
using namespace std;



int main()
{
	int n, value, position;
	cout << "Enter size of an array: ";
	cin >> n;
	int arr[n+1];
	cout << "Enter array elements: ";
	for(int i = 0; i < n; i++) cin >> arr[i];
	cout << "Enter the position: ";
	cin >> position;
	if(position >= 0 && position < n)
	{
		cout << "Enter new element you want to insert: ";
		cin >> value;
		for(int i = n; i >= position; i--) arr[i] = arr[i-1];
		arr[position-1] = value;
		cout << "After insertion: ";
		for(int i = 0; i < n; i++) cout << arr[i] << " ";
	}
	else cout << "Invalid Position.\n";
} 
