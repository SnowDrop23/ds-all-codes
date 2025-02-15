#include <iostream>
#include <vector>
using namespace std;


int partition(vector<int>&arr, int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;

    
    while(start < end)
    {
        while(arr[start] <= pivot) start++;
        while(arr[end] > pivot) end--;
        if(start < end) swap(arr[start], arr[end]);
    }
    swap(arr[lb], arr[end]);
    return end;
    
}
void quickSort(vector<int>&arr, int lb, int ub)
{
    if(lb < ub)
    {
        int location = partition(arr, lb, ub);
        quickSort(arr, lb, location-1);
        quickSort(arr, location+1, ub);
    }
}
int main ()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> arr(n);
    
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];
    quickSort(arr, 0, n-1);
    

    cout << "After sorting: ";
    for(int i : arr) cout << i << " ";
}
