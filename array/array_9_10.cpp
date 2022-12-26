#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int *a = new int[n];
    int *b = new int[m];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }

    int *c = new int[n+m];

    int k=0;
    for(int i=0; i<n; i++){
        c[k++]=a[i];
    }
    for(int i=0; i<m; i++){
        c[k++]=b[i];
    }

    int max=0;

    for(int i=0; i<k; i++){
        if(a[i]>max){
            max=a[i];
        }
    }

    int *freq = new int[max];

    freq={0};

    for(int i=0; i<k; i++){
        freq[a[i]]++;
    }

    cout<<"The Union is"<<endl;
    for(int i=0; i<max; i++){
        if(freq[i]>=1){
            cout<<freq[i]<<" ";
        }
    }
    cout<<"The Intersection is"<<endl;
    for(int i=0; i<max; i++){
        if(freq[i]==2){
            cout<<freq[i]<<" ";
        }
    }


}