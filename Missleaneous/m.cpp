#include<iostream>
using namespace std;

int partion(int *arr, int s, int e){
    int pivot=arr[s];
    int count=0;
    for(int i=s; i<=e; i++){
        if(pivot>arr[i]){
            count++;
        }
    }
    int pivot_index=s+count;

    swap(arr[s],arr[pivot_index]);

    int i=s;
    int j=e;
    while(i<pivot_index && j>pivot_index){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i<pivot_index && j>pivot_index){
            swap(arr[i++],arr[j++]);
        }
    }

    return pivot_index;

}

void quick_sort(int *arr, int s, int e){


    // base case
    if(s>=e){
        return ;
    }


    // partion karo
    int p = partion(arr,s,e);

    // left part sort

    quick_sort(arr,s,p-1);

    // right part sort

    quick_sort(arr,p+1,e);
}

int main(){
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    int s=0;
    int e=9;

    quick_sort(arr, s,e);

    for(int i=0; i<=9; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}