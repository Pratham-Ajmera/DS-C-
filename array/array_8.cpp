#include<iostream>
#include<vector>
using namespace std;

void print_array(vector<int> &c){
    for(int i=0; i<c.size(); i++){
        cout<<c[i]<<" ";
    }
}

void merge_array(vector<int> &a, vector<int> &b){
    vector<int> c;
    int i=0; int j=0;
    while(i< a.size() && j<b.size()){
        if(a[i]>b[j]){
            c.push_back(b[j++])
        }

        if(a[i]<b[j]){
            c.push_back(a[i++]);
        }
    }
    while(i<a.size()){
        c.push_back(a[i++]);
    }
    while(j<b.size()){
        c.push_back(b[j++]);
    }

    print_array(c);

}

void enter_array(vector<int> &ans){
    int n;
    cout<<"Enter the Size"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>ans[i];
    }
}

int main(){
    vector<int>a;
    vector<int>b;
    enter_array(a);
    enter_array(b);
    merge_array(a,b);
}