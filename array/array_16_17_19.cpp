#include<iostream>
#include<vector>
using  namespace std;

void transpose(vector<int> &n, int n int m){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<n[i][j]<<" ";
        }

        cout<<endl;
    }
}


void print(vector<int> &c, int n, int m){
    
    for(int i=0; i<n;; i++){
        for(int j=0; j<m; j++){
            cout<<c[i][j];
        }
    }
}

void enter_arrray(vector<int> &ans, int n, int m){
    
    for(int i=0; i<n;; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
}

void substraction(ector<int> &a, vector<int> &b, vector<int> c, int n , int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            c[i][j]=a[i][j]-b[i][j];
        }
    }

    print(c,n,m);
}


void sum(vector<int> &a, vector<int> &b, vector<int> c, int n , int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    print(c,n,m);
}

 int main(){
    vector<vector<int>> a;
    vector<vector<int>> b;
    vector<vector<int>> c;
    int n,m;
    coutt<<"Enter the Rows And Columns";
    cin>>n>>m;

    enter_array(a,n,m);
    // enter_array(b,n,m);

    sum(a,b,c,n,m);

 }