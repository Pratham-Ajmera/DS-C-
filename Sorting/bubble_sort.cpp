#include<iostream>
#include<vector>
using namespace std;

void bubble_sort(vector<int> &a){
    int n =a.size();
    int temp;

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }


}

 int main(){
    vector<int> a;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int data;
        cin>>data;
        a.push_back(data);
    }

    bubble_sort(a);

 }