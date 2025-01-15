//delete element from given position
#include <iostream>
using namespace std;
int main()
{
	int n, value, position;
	cout << "Enter size of an array: ";
	cin >> n;
	int arr[n];
	cout << "Enter array elements: ";
	for(int i = 0; i < n; i++) cin >> arr[i];

	cout << "Enter position: ";
	cin >> position;
	if(position >= 0 && position < n)
	{
		for(int i = position-1; i <= n; i++) arr[i] = arr[i+1];
		n--;
		cout << "After deletion: ";
		for(int i = 0; i < n; i++) cout << arr[i] << " ";
	}
	else cout << "Invalid Position.\n";
    
} 
