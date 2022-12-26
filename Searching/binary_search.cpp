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

int binary_search(vector<int> &a,int key, int s,int e){
    int mid=(s+e)/2;
    int ans=0;

    while(s<=e){
        if (a[mid]==key)
        {
            ans=1;
            return mid;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;
        
    }
    if(ans == 0){
        return -1;
    }

}


int main(){
    vector<int> a;
    enter_array(a);
    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;
    int s=0;
    int e=a.size()-1;
    int b=binary_search(a,key,s,e);
    cout<<b;
    return 0;
}
    
