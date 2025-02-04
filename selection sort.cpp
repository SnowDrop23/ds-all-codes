
#include <iostream>
#include <vector>
using namespace std;

int selectionSort(vector<int>&nums)
{
    int size = nums.size();
    for(int i = 0; i < size-1; i++)
    {
        int min = i;
        for(int j = i+1; j < size; j++)
        {
            if(nums[j] < nums[min]) min = j;
        }
        if(min != i) swap(nums[i], nums[min]);
    }
    return size;
}
int main ()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> nums[i];
    int size = selectionSort(nums);
    

    cout <<  "After sorting: ";
    //for(int i = 0; i < size; i++) cout << nums[i] << " ";
    for(int i : nums) cout << i << " ";
}
