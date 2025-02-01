#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&arr, int start, int mid, int end)
{
    vector<int>temp;
    int i = start, j = mid+1;

    while(i <= mid && j <= end)
    {
        if(arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        } 
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for(int a = 0; a < temp.size(); a++)
    {
        arr[a+start] = temp[a];
    }
}

void mergeSort(vector<int>&arr, int start, int end)
{
    if(start < end)
    {
        int mid = start + (end-start)/2;

        mergeSort(arr, start, mid);//Left half
        mergeSort(arr, mid+1, end);//Right half

        merge(arr, start, mid, end);
    }
}


int main ()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    vector<int>arr(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];
    mergeSort(arr, 0, arr.size()-1);

    for(int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
    
}
