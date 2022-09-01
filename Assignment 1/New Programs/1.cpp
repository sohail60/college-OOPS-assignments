#include <iostream>
#include <algorithm>
using namespace std;

class node
{
public:
    void display(int arr[], int n)
    {
        
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    void sum(int arr[], int n)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }

        cout << "The sum of array elements is: " << sum << endl;
    }

    void maxandmin(int arr[], int n)
    {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (maxi < arr[i])
            {
                maxi = arr[i];
            }
            if (mini > arr[i])
            {
                mini = arr[i];
            }
        }

        cout << "The Maximum Element is: " << maxi << endl;
        cout << "The Mininum Element is: " << mini << endl;
    }

    void reverse(int arr[], int start, int end , int n)
    {
        while (start<end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }

        cout << "The reversed array element is: " << endl;
        display(arr,n);
    }

    void sorting(int arr[], int n)
    {
        sort(arr, arr + n);
        cout << "The Sorted Array elements are: " << endl;
        display(arr, n);
    }

    
};

int main()
{
    cout << "Enter the number of elements to be taken into an array " << endl;
    int n;
    cin >> n;
    int arr[n];

    cout << "Enter the elements to be taken into an array " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    node object;

    cout << "The array elements are: " << endl;
    object.display(arr, n);
    object.sum(arr, n);
    object.maxandmin(arr, n);
    object.reverse(arr, 0, n-1, n);
    object.sorting(arr, n);

    return 0;
}