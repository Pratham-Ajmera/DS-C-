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

void diff(vector<int> &a, vector<int> &b, int option){
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
    int n,m;
    int data;
    cout<<"Enter the size of the array\n";
    cin>>n>>m;
    vector <int> a;
    vector<int> b;

    cout<<"Enter the Element of Array A\n";

    for(int i=0; i<n; i++){
        cin>>data;
        a.push_back(data);
    }


    cout<<"Enter the Element of Array B\n";


    for(int i=0; i<m; i++){
        cin>>data;
        a.push_back(data);
    }

    int option; // to find A-B or B-a
    cout<<"Press 1 to perform A-B\n";
    cout<<"Press 2 to preform B-A"<<endl;
    cin>>option;

    diff(a,b,option); // to the difference on the given option

}