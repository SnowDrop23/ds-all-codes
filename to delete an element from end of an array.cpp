//delete an element from the end of an array
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter size of an array: ";
	cin >> n;
	int arr[n];
	cout << "Enter array elements: ";
	for(int i = 0; i < n; i++) cin >> arr[i];
	

	cout << "After deletion: ";
	for(int i = 0; i < n-1; i++) cout << arr[i] << " ";
}
