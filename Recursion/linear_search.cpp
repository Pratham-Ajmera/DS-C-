#include<iostream>
using namespace std;

int linear_search(int arr[], int n, int key){
    if(n==0){
        return 0;
    }
    if(arr[0]==key){
        return 1;
    }
    else{
      
        int rem = linear_search(arr+1, n-1, key);
        return rem;
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    int key=4;
    cin>>key;
    int ans=linear_search(arr, n, key);
    if(ans){
        cout<<"found";

    }
    else{
        cout<<"Not found";
    }

    return 0;

}