#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
    int n;
    vector<int> ans;
    cin>>n;
    for(int i=1; i<n; i++){
        if(n%i==0){
            ans.push_back(i);
        }
    }
    for(int i=0; i<ans.size(); i++){
        int count=0;
        for(int j=2; j<=sqrt(i); j++){
            if(ans[i]%j==0){
                count++;
            }
        }
        if(count==0){
            cout<<ans[i]<<" ";
        }
    }

    return 0;

}