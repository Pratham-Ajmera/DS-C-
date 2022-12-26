#include<iostream>
#include<vector>

using namespace std;

void enter_array(vector<int> &ans){
    int n;
    cout<<"Enter the Size"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>ans[i];
    }
}

void count(vector<int> &ans){
    int max=ans[0];
    for(int i=0; i<ans.size(); i++){
        if(ans[i]>=max){
            max=ans[i];
        }
    }
    vector<int> freq[max];

    for(int i=0; i<n; i++){

        freq[ans[i]]++;
    }

    for(int i=0; i<max; i++){
        cout<<"The Freequecy of"<<i<<" -> "<<freq[i]<<endl;
    }

}


int main(){
    vector<int> ans;
    enter_array(ans);
    count(ans);
}