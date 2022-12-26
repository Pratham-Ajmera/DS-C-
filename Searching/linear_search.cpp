#include<iostream>
#include<vector>
using namespace std;

void enter_array(vetor<int> &a){
    int n;
    cout<<"Enter the Size\n"
    cin>>n;
    int data;
    for(int i=0; i<n; i++){
        cin>>data;
        a.push_back(data);
    }

}

int linear_search(vector<int> &a, int &key){
    int b=0;
    for(int i=0; i<a.size(),i++){
        if(a[i]==key){
            return i;
            b = 1;
        }
    }
    if(b == 0){
        return -1;
    }
}

int main(){
    vector<int> a;
    enter_array(a);
    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;
    int b=linear_search(a,key);
    cout<<b;
    return 0;
    
}