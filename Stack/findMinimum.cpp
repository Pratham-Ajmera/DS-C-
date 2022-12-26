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
    S.push(-65);
    S.push(45);
    S.push(12);
    S.push(65);
    S.push(32);
    S.push(-100);
    int min=S.pop();
    while(!S.isEmpty()){
        int a=S.pop();
        if(a<=min){
            min=a;
        }
    }


    cout<<min;


    return 0;



}    