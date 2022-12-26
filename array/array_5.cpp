#include<iostream>
#include<vector>
using namespace std;

int find_missing(vector<int> &ans){
    int a=ans[0];
    int b=ans[1];
    int step=a-b;
    for(int i=0; i<ans.size()-1; i++){
        if(step<0){
            if(ans[i+1] != a[i]-step)
            {
            // bool flag=1;
            return (a[i]-step);
        } 
        }
        else{
            if(ans[i+1] != a[i]+step){
            // bool flag=1;
            return (a[i]+step);
        } 
        }   
    }
}

void enter_array(vector<int> &ans)
{
    int n;
    cout << "Enter the no. of terms" << endl;
    
    cout << "Enter the value in sorted order -> assending" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> data;
        ans.push_back(data);
    }
}
int main(){
    vector<int> ans;
    int a = find_missing(ans);

    cout<<"The missing index is"<<a<<endl;
    
    return 0;

}