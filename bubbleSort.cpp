
#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &arr) {
	int size = arr.size();
	int counter = 1;
	while(counter < size)
	{
		for(int i = 0; i < (size-counter); i++)
		{
			if(arr[i] > arr[i+1]) 
			{
				swap(arr[i], arr[i+1]);
			}
		}
		counter++;
	}
  cout << "After sorting: ";
	for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

int main ()
{
	int n;
  cout << "Enter size of an array: ";
	cin >> n;
	vector<int> arr(n);
  cout << "Enter array elements: ";
	for(int i = 0; i < n; i++) cin >> arr[i];
	
	bubbleSort(arr);
	

}
