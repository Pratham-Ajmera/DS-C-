#include<iostream>
using namespace std;

int issorted(int arr[], int n){
    if(n==0||n==1){
        return 1;
    }
    
    if(arr[0]>arr[1]){
        return 0;
    }

    else{
        int p=issorted(arr+1,n-1);
        return p;
    }
    
}

int main(){
    int arr[10]={2,5,4,8,7,4,6,9,8,10};
    int n=10;
    int ans=issorted(arr,n);
    if(ans){
        cout<<"Array is Sorted";
    }
    else{
        cout<<"Not Sorted";
    }

    return 0;

}