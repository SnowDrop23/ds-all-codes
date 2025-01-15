// Write a program to insert a new element at the beginning of an array

#include<iostream>
using namespace std;
int main ()
{
  int n, value;
	cout << "Enter size of an array: ";
	cin >> n;
	int arr[n+1];
	cout << "Enter array elements: ";
	for(int i = 0; i < n; i++) cin >> arr[i];
	cout << "Enter the new: ";
	cin >> value;
	for(int i = n; i > 0; i--) arr[i] = arr[i-1];
	arr[0] = value;
	cout << "After insertion: ";
	for(int i = 0; i <= n; i++) cout << arr[i] << " ";
  
    
}
