#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &c){
    cout<<"The difference is"<<endl;
    int n=c.size();
    for(int i=0; i<n; i++){
        cout<<c[i]<<" ";
    }
}

void symmteric_diff(vector<int> &a, vector<int> &b, int option=1){
    vector<int> c;
    int n=a.size();
    int m=a.size();
    if(option == 1){

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i] != b[j]){
                    c.push_back(a[i]);
                }
            }
        }


    }

    else{
        

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(b[i] != a[j]){
                    c.push_back(b[i]);
                }
            }
        }

    }

    print(c);   //for the print the ans array

}

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
     vector<int> uni;
    for(int i=0; i<max; i++){
        if(freq[i]>=1){
            uni.push_back(freq[i]);
        }
    }

    vector<int> inter;

    for(int i=0; i<max; i++){
        if(freq[i]==2){
            inter.push_back(freq[i]);
        }
    }

    symmteric_diff(uni,inter);


}