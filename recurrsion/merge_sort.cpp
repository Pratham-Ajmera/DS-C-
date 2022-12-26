#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];
    int mainIndex = s;

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainIndex++];
    }
    mainIndex = mid + 1;
    for (int i = 0; i < len1; i++)
    {
        second[i] = arr[mainIndex++];
    }
    int index1 = 0;
    int index2 = 0;
    mainIndex = s;
    while (index1 <= len1 && index2 <= len2)
    {
        if (first[index1] > second[index2])
        {
            arr[mainIndex++] = first[index1++];
        }
        else
        {
            arr[mainIndex++] = second[index2++];
        }
    }
    while (index1 <= len1)
    {
        arr[mainIndex++] = first[index1++];
    }

    while (index2 <= len2)
    {
        arr[mainIndex++] = first[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    cout<<"hyy";
    int mid = (s + e) / 2;

    // left part sorted

    mergeSort(arr, s, mid);

    // right part sorted
    mergeSort(arr, mid + 1, e);

    // to merge the both the parts
    merge(arr, s, e);
}

int main()
{
    int arr[10] = {2, 4, 6, 8, 10, 1, 3, 5, 7, 9};
    int n = 9;
    int s = 0;
    mergeSort(arr, s, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}