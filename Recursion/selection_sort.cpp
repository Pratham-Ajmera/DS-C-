#include<iostream>
using namespace std;

void selectionSort(int *arr, int n,int i){
    if(n==0||n==1){
        return ;
    }
    if(i>(n-1)){
        return ;
    }
    for(int j=i+1; j<n; j++){
        if(arr[i]>arr[j]){
            swap(arr[i], arr[j]);
        }

    }
    i++;
    selectionSort(arr, n, i);

}

int  main(){
    int arr[10]={2,4,6,8,10,1,3,5,7,9};
    int n=sizeof(arr)/sizeof(int);
    int p=0;
    selectionSort(arr,n,p);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}