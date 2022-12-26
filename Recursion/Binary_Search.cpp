#include<iostream>
using namespace std;

int binary_search(int arr[], int s, int e, int key){
    int mid=(s+e)/2;
    if(s>e){
        return 0;
    }
    if(arr[mid]==key){
        return 1;
    }
    else if (arr[mid]>key){
        int rem=binary_search(arr,s,mid-1,key);
        return rem;    
    }
    else{
        int rem=binary_search(arr,mid+1,e,key);
        return rem;
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    int start=0;
    int end=n-1;
    int key;
    cout<<"Enter the value you want to search"<<endl;
    cin>>key;
    int ans=binary_search(arr,start,end,key);
    if(ans){
        cout<<"Element Found";
    }
    else{
        cout<<"Element not found";
    }

    return 0;
}