#include<iostream>
using namespace std;

void selection_sort(vector<int> &a){
    int n=a.size();
    int temp;
    for(int i=0; i<n; i++){
        int min=i;
        for(int j=i; j<n; j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        swap(a[max],a[i]);
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
        cin>>data
        a.push_back(data);
    }

    selection_sort(a);

}