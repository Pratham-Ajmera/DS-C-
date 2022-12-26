#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> ans;
    int n;
    cout<<"Enter the size of set 1"<<endl;
    cin>>n;
    int m;
    cout<<"Enter the size of set 2"<<endl;
    cin>>m;

    int *a = new int[n];
    int *b = new int[m];
    cout<<"Enter Set 1"<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"Enter Set 2"<<endl;
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
    // cout<<"The union is"<<endl;

    for(int i=0; i<k; i++){
        if(c[i]>max){
            max=c[i];
        }
    }

    int *freq = new int[max+1];

    for(int i=0; i<max; i++){
        freq[i]=0;
    }

    for(int i=0; i<k; i++){
        freq[c[i]]++;
    }
    // cout<<max<<endl;
    cout<<"The Union is"<<endl;
    
    for(int i=0; i<=max; i++){
        if(freq[i]>0){
            ans.push_back(i);
            
        }
    }
    bool f=0;
    int q=ans.size();
    cout<<"{";
    q--;
    while(q>=0){
        cout<<ans[q];
        if(q==0){
            break;
        }
        cout<<",";
        q--;
    }
   
    cout<<"}";
    // cout<<f;

    return 0;
    


}