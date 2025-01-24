
#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &arr) {
	int size = arr.size();
	int temp;
	for(int i = 0; i < size; i++)
	{
		temp = arr[i];
		int j = i-1;
		while(j >= 0 && arr[j] > temp)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
		
	}
	return size;
}

int main ()
{
	int n;
  cout << "Enter array size: ";
	cin >> n;
	vector<int> arr(n);
  cout << "Enter array elements: ";
	for(int i = 0; i < n; i++) cin >> arr[i];
	
	int size = insertionSort(arr);
	for(int i = 0; i < size; i++) cout << arr[i] << " ";

}
