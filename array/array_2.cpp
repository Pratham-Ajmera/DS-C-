#include<iostream>
#include<vector>
using namespace std;

vector<int> insert(vector<int> &ans, int data, int position){
    if(position==0){
        ans[0]=data;
        return ans;
    }
    else if(position > ans.size(){
        ans.push_back(data);
        return ans;
    }
    else{
        int temp =ans[position];
        ans[position]=data;
        for(int j=(position+1); j<=ans.size(); j++){
            int temp_new=ans[j];
            ans[j] = temp;
            temp=temp_new;
        }
        return ans;
    }
}

int main(){
    vector<int> ans;
    int n;
    cin>>n;
    int position;
    cin>>position;
    cout<<"hyy"<<endl;
    cout<<ans.size()<<endl;


    insert(ans, n , position);
}