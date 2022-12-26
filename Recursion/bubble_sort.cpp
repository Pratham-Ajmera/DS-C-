#include<iostream>
using namespace std;

void sorted(int *arr, int n){
    if(n==0||n==1){
        return ;
    }
    for(int i=0; i<=n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    sorted(arr, n-1);

}

int main(){
    int arr[10]={1,3,5,7,9,2,4,6,8,10};
    int n=9;
    sorted(arr, n);
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}