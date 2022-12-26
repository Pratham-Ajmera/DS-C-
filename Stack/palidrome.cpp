#include<iostream>
#define max 10
using namespace std;
int main(){
    class Stack{
        public:
        int arr[max];
        int peak=-1;
        void push(int data){
            if(peak>=max){
                cout<<"stack overflow"<<endl;
            }
            else{
                arr[++peak]=data;
            }
        }

        int pop(){
            if(peak<=-1){
                cout<<"Stack OverFlow"<<endl;
            }
            else{
                int data=arr[peak--];
                return data;
            }
        }

        void traverse(){
            for(int i=0; i<=peak; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        int peak_ele(){
            if(peak==-1){
                cout<<"Stack Underflow"<<endl;
                
            }
            else{
                int data = arr[peak];
                return data;
            }
        }
        bool isEmpty(){
            if(peak==-1){
                return 1;
            }
            else{
                return 0;
            }
        }
        
        bool isfull(){
            if(peak == max-1){
                return 1;
            }
            else{
                return 0;
            }
        }


    };

    Stack S;
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    int temp = n;
    while(n>0){
        int q = n%10;
        S.push(q);
        n=n/10;
    }
    bool f=1;
    while(!S.isEmpty() && temp>0){
        int p1 = temp%10;
        int p2 = S.pop();

        temp=temp/10;
        cout<<p1<<" "<<p2<<endl;

        if(p1!=p2){
            cout<<"Not Palindrome"<<endl;
            f=0;
            break;
        }
    }
    if(f)
    cout<<"Valid"<<endl;
    
    return 0;


}    