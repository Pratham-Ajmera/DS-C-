#include<iostream>
using namespace std;

int binary__search(int *arr,int s, int e, int key)
{
    int mid=(s+e)/2;
    if(s>=e){
        return -1;
    }
    if(arr[mid]==key){
        return mid;
    }
    else if (arr[mid]>key)
    {
        binary__search(arr,s,mid-1,key);
    }
    else{
        binary__search(arr,mid+1,e,key);
    }
}

int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    int s=0;
    int e=8;
    int key;
    cin>>key;
    int ans=binary__search(a,s,e,key);
    cout<<ans;
    return 0;
}