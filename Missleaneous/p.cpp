#include<iostream>
using namespace std;
int main(int argc, const char** argv) {
    int a[30];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" "; 
    }
    cout<<endl;
    return 0;
}