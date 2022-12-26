#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int> &ans){
    int i=0;
    int j=ans.size()-1;
    while(i <= j){
        swap(ans[i++],ans[j--]);
    }
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
    vector<int> ans;
    enter_array(ans);  
    reverse(ans); 
    
}