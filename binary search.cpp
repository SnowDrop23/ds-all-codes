
#include<iostream>
#include<vector>
//#include<algorithm>
using namespace std;

int binarySearch(vector<int> &arr, int x) {
    int n = arr.size();
	int mid, left = 0, right = n-1;
	while(left <= right)
	{
		mid = (left + right)/2;
		if(x == arr[mid]) return mid;
		else if(x < arr[mid]) right = mid-1;
		else left = mid+1;
	}
	return 0;
}

int main ()
{
	int n, value;
  cout << "Enter size of an array: ";
	cin >> n;
	vector<int> arr(n);
  cout << "Enter array elements: ";
	for(int i = 0; i < n; i++) cin >> arr[i];
  cout << "Enter the element you want to find: ";
	cin >> value;
	int res = binarySearch(arr, value);
	if(res) cout << "Element is present at index " << res+1 << endl;
	else cout << "Element is not present" << endl;
	

}
