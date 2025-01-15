//delete element from beginning
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
	
    for(int i = 0; i < n; i++) arr[i] = arr[i+1];
	cout << "After deletion: ";
	n--;
	for(int i = 0; i < n; i++) cout << arr[i] << " ";
} 
